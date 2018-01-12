#include<bits/stdc++.h>//Accepted MST problem solving using kruskal algorithm
#define MAXN 101
using namespace std;

struct krus
{
	int u,v;
	double w;
	bool operator < ( const krus& p ) const
	{
		return w < p.w;
	}
};
vector<krus>data;

int Find(int r,int par[])
{
    if(par[r]==r)
    {
        return r;
    }
    else
    {
        par[r]=Find(par[r],par);
        return Find(par[r],par);
    }
}

int mst(int n,int r)
{
    int i,j,l,u,v,val,count=1,state=1;
    double c1=0,c2=0;
    int par[n+1];
    sort(data.begin(),data.end());

    l=data.size();
    for(i=1;i<=n;i++)
    {
        par[i]=i;
    }
    for(i=0;i<l;i++)
    {
        u=Find(data[i].u , par);
        v=Find(data[i].v , par);

        if(u!=v)
        {
            par[u]=v;//in this problem it is more important not connect two cities if they are already connected. so cost minimization is 2nd priority
            if(data[i].w<=r)
            {
                c1+=data[i].w;
            }
            else
            {
                c2+=(data[i].w);
                ++state;//so they will be diffrent state
            }
            ++count;
            if(count==n)
            {
                break;
            }
        }
    }
    /*vector<int>parent;
    bool x;
    for(i=1;i<=n;i++)
    {
        x=false;
        val=Find(i,par);
        for(j=0;j<parent.size();j++)
        {
            if(val==parent[j])
            {
                x=true;
                break;
            }
        }
        if(x==false)
        {
            parent.push_back(val);
        }
    }
    */
    printf("%d %.0f %.0f\n",state,round(c1),round(c2));
    //cout<<int(c2+.5)<<" "<<state<<endl;
    return 0;
}

int main()
{
    freopen("11228.Transportation System.txt","r",stdin);
    int i,j,n,r,T,c=0;
    double x,y,w;
    vector<double>X,Y;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&n,&r);
        for(i=0;i<n;i++)
        {
            scanf("%lf %lf",&x,&y);//%lf to scan
            X.push_back(x);
            Y.push_back(y);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                w = (X[j]-X[i])*(X[j]-X[i]) + (Y[j]-Y[i])*(Y[j]-Y[i]);
                w=sqrt(w);

                krus o;
                o.u=i+1,o.v=j+1,o.w=w;
                data.push_back(o);
            }
        }

        printf("Case #%d: ",++c);
        mst(n,r);
        X.clear();
        Y.clear();
        data.clear();
    }
    return 0;
}
/*

//#include "UVa11228.h"
#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <cmath>
#include <iomanip>

using namespace std;

int UVa11228_find(int item, vector<int>& sets)
{
    if (sets[item] < 0)
    {
        return item;
    }
    else
    {
        return sets[item] = UVa11228_find(sets[item], sets);
    }
}

bool UVa11228_union(int item1, int item2, vector<int>& sets)
{
    int set1 = UVa11228_find(item1, sets);
    int set2 = UVa11228_find(item2, sets);

    cout<<set1+1<<" "<<set2+1<<endl;
    if (set1 != set2)
    {
        // Union
        if (sets[set1] < sets[set2])              // set1 is larger
        {
            sets[set1] = sets[set1] + sets[set2]; // size increased
            sets[set2] = set1;                    // union
        }
        else
        {
            sets[set2] = sets[set1] + sets[set2]; // size increased
            sets[set1] = set2;                    // union
        }

        return true;
    }
    else
    {
        return false;
    }
}

class UVa11228_Edge
{
public:
    UVa11228_Edge(int _src, int _dst, double _weight) : src(_src), dst(_dst), weight(_weight) {}
    int src;
    int dst;
    double weight;
};

class UVa11228_Edge_Less
{
public:
    bool operator()(UVa11228_Edge edge1, UVa11228_Edge edge2)
    {
        return edge1.weight > edge2.weight;
    }
};

int main()
{
    freopen("11228.Transportation System.txt","r",stdin);
    int number_of_test_case;
    cin >> number_of_test_case;
    for (int test_case = 1; test_case <= number_of_test_case; test_case++)
    {
        // Step 1: Input
        int number_of_cities;
        cin >> number_of_cities;
        int threshold;
        cin >> threshold;
        vector<pair<int, int> > cities;
        for (int i = 0; i < number_of_cities; i++)
        {
            int cx;
            int cy;
            cin >> cx;
            cin >> cy;
            cities.push_back(pair<int, int>(cx, cy));
        }

        // Step 2.1: Kruskal's 1: Push all edges to priority queue
        priority_queue<UVa11228_Edge, vector<UVa11228_Edge>, UVa11228_Edge_Less> edges;
        for (int src = 0; src < number_of_cities; src++)
        {
            for (int dst = src + 1; dst < number_of_cities; dst++)
            {
                double src_x = cities[src].first;
                double src_y = cities[src].second;
                double dst_x = cities[dst].first;
                double dst_y = cities[dst].second;
                double diff_x = src_x - dst_x;
                double diff_y = src_y - dst_y;
                double dist = sqrt(diff_x * diff_x + diff_y * diff_y);
                cout<<src+1<<" "<<dst+1<<" "<<dist<<endl;
                edges.push(UVa11228_Edge(src, dst, dist));
            }
        }
        printf("\n\n");

        // Step 2.2: Kruskal's 2: Setup disjoint set union find
        vector<int> disjoint_sets;
        disjoint_sets.resize(number_of_cities);
        for (int f = 0; f < number_of_cities; f++)
        {
            disjoint_sets[f] = -1;
        }

        // Step 2.3: Kruskal's 3: For each edge, if not create cycle, add
        int num_edge_added = 0;
        double road_weight = 0;
        double rail_weight = 0;
        int num_states = 1;
        while (num_edge_added != number_of_cities - 1)
        {
            UVa11228_Edge edge = edges.top();
            edges.pop();
            cout<<edge.src+1<<" "<<edge.dst+1<<" "<<edge.weight<<endl;
            if (UVa11228_union(edge.src, edge.dst, disjoint_sets))
            {
                num_edge_added++;
                cout<<"in "<<edge.src+1<<" "<<edge.dst+1<<" "<<edge.weight<<endl;
                if (edge.weight > threshold)
                {
                    num_states++;
                    rail_weight += edge.weight;
                    cout<<edge.src+1<<" "<<edge.dst+1<<" "<<rail_weight<<endl<<endl;;
                }
                else
                {
                    road_weight += edge.weight;
                }
            }
        }

        cout << "Case #" << test_case << ": " << num_states << " " << (int)(road_weight + 0.5) << " " << (int)(rail_weight + 0.5) << endl;
    }
    return 0;
}
*/
