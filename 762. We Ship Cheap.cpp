#include<bits/stdc++.h>
using namespace std;

#define MAX 100000
vector<int>G[MAX];
int level[MAX]={0},parent[MAX]={0};;

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
    int t,i,j,k,src,ttl,c=0,count,edge;
    int assign=1,x,y;
    map<string,int>mymap;
    map<int,string>mymap2;

    while(scanf("%d",&edge)==1)
    {
        for(i=0;i<edge;i++)
        {
            cin>>node1>>node2;
            if(mymap.find(node1)==mymap.end())
            {
                mymap[node1]=assign;
                mymap2[assign]=node1;
                cout<<"Mapping "<<node1<<"with "<<assign<<endl;
                assign++;
            }
            x=mymap[node1];
            if(mymap.find(node2)==mymap.end())
            {
                mymap[node2]=assign;
                mymap2[assign]=node2;
                cout<<"Mapping "<<node2<<"with "<<assign<<endl;
                assign++;
            }
            y=mymap[node2];
            G[x].push_back(y);
            G[y].push_back(x);
        }
        for(i=1;i<assign;i++)
        {
            k=G[i].size();
            cout<<"Connected node with node "<<i<<" :";
            for(j=0;j<k;j++)
            {
                cout<<" "<<G[i][j];
            }
            printf("\n");
        }
        cin>>node>>aim;
        src=mymap[node];
        bfs(assign-1,src);
        //int m=mymap2[aim];
        //cout<<mymap2[node]<<" to "<<mymap2[aim]<<" distance = "<<level[m]<<end;
        for(int i=1;i<assign;i++)
        {
            //printf("%d to %d Shortest distance %d\n",src,i,level[i]);
            cout<<mymap2[src]<<" to "<<mymap2[i]<<" distance "<<level[i]<<endl;
            cout<<"Path in backward = "<<mymap2[i]<<" ";
            int x=i;
            while(x!=src && level[i]!=0)
            {
                x=parent[x];
                cout<<mymap2[x]<<" ";

            }
            printf("\n\n");
        }
        for(i=1;i<assign;i++)
        {
            G[i].clear();
        }
        assign=1;
        mymap.clear();
        //memset(level,0)
        memset(level,0,sizeof level);
        memset(parent,0,sizeof parent);
    }
    return 0;
}

