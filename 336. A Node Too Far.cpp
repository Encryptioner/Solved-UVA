#include<bits/stdc++.h>//Accepted
using namespace std;

#define MAX 100
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
		Q.pop();
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

	}
}

int main()
{
    freopen("336. A Node Too Far.txt","r",stdin);
    int t,i,j,k,node1,node2,src,ttl,node,c=0,count;
    int assign=1,x,y;
    map<int,int>mymap;

    while(cin>>t && t!=0)
    {
        for(i=0;i<t;i++)
        {
            scanf("%d %d",&node1,&node2);
            //map all nodes. Counting started from 1
            if(mymap.find(node1)==mymap.end())
            {
                mymap[node1]=assign;
                assign++;
            }
            x=mymap[node1];
            if(mymap.find(node2)==mymap.end())
            {
                mymap[node2]=assign;
                assign++;
            }
            y=mymap[node2];
            //Construct  graph with adjacent list
            G[x].push_back(y);
            G[y].push_back(x);
        }

        while(cin>>node && cin>>ttl)
        {
            if(node==0 && ttl==0)
            {
                break;
            }
            src=mymap[node];
            //find distance of all node from src
            bfs(assign-1,src);//sending number of node (as assign increased by 1) and src

            count=0;
            for(i=1;i<assign;i++)//check all node
            {
                if(level[i]>ttl || level[i]==0)//counting which nodes have distance>ttl, src to src messaging cost 0
                {
                    count++;
                }
            }
            if(src>0 && src<assign)//if src is mapped from 1 to number of node
            {
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++c,count-1,node,ttl);//as src is reachable so count-1
            }
            else//for unknown tricky case
            {
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++c,count,node,ttl);
            }

            memset(parent,0,sizeof parent);
            memset(level,0,sizeof level);
        }

        for(i=1;i<assign;i++)
        {
            G[i].clear();
        }
        assign=1;
        mymap.clear();
    }
    return 0;
}
