#include<bits/stdc++.h>//Accepted
using namespace std;

#define MAX 100000
vector<int>G[MAX];
int level[MAX]={0},parent[MAX]={0};

void bfs(int n,int src)
{
	queue<int>Q;
	Q.push(src);
	int visited[MAX]={0};

	visited[src]=1;
    level[src]=0;

	while(!Q.empty())
	{
		int u=Q.front();
		for(int i=0;i<G[u].size();i++)
		{
			int v=G[u][i];
			if(!visited[v])
			{
				level[v]=level[u]+1;
				parent[v]=u;
				visited[v]=1;
				Q.push(v);
			}
		}
		Q.pop();
	}
}

int main()
{
    freopen("762. We Ship Cheap.txt","r",stdin);
    string node1,node2,node,aim;
    int t,i,j,k,src,count,edge,stop,des;

    int assign=1,x,y;
    bool first=true;
    map<string,int>mymap;
    map<int,string>mymap2;
    vector<string>s;

    while(scanf("%d",&edge)==1)
    {
        if(first!=true)
        {
            printf("\n");
        }
        first=false;
        //map all city and create adjacent list
        for(i=0;i<edge;i++)
        {
            cin>>node1>>node2;
            if(mymap.find(node1)==mymap.end())
            {
                mymap[node1]=assign;
                mymap2[assign]=node1;
                assign++;
            }
            x=mymap[node1];
            if(mymap.find(node2)==mymap.end())
            {
                mymap[node2]=assign;
                mymap2[assign]=node2;
                assign++;
            }
            y=mymap[node2];
            G[x].push_back(y);
            G[y].push_back(x);
        }
        cin>>node>>aim;
        src=mymap[node];
        stop=mymap[aim];

        bfs(assign-1,src);
        if(level[stop]==0)
        {
            printf("No route\n");
        }
        else//print shortest path
        {
            des=stop;
            s.push_back(mymap2[des]);//pushing destination city
            while(des!=src)
            {
                des=parent[des];
                s.push_back(mymap2[des]);//pushing path in reverse order
            }
            k=s.size();
            count=0;
            for(i=k-1;i>=0;i--)//printing it
            {
                if(i==k-1)
                {
                    cout<<s[i];//1st city
                }
                else if(i==0)
                {
                    cout<<" "<<s[i]<<endl;//last city
                }
                else//printing acoording to test output
                {
                    ++count;
                    if(count%2!=0)
                    {
                        cout<<" "<<s[i]<<endl<<s[i];//each city will be printed two times except src and des
                        if((i-1)!=0)
                        {
                            printf(" ");
                        }
                    }
                    else
                    {
                        cout<<s[i]<<endl<<s[i];
                    }
                }
            }
        }
        for(i=1;i<assign;i++)
        {
            G[i].clear();
        }
        assign=1;
        mymap.clear();
        s.clear();
        memset(level,0,sizeof level);
        memset(parent,0,sizeof parent);
    }
    return 0;
}


