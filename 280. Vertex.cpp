#include<bits/stdc++.h>//Accepted By DFS
using namespace std;

#define MAX 105
vector<int>G[MAX];
int visited[MAX];

//insert an edge (vi,vj) in te adjacency list
void DFS(int i)
{

    int s=G[i].size();


    for(int j=0;j<s;j++)
    {
       int x=G[i][j];

       if(!visited[x])
       {
           visited[x]=1;
           DFS(x);
       }
    }
}

int main()
{
    //freopen("280. Vertex.txt","r",stdin);
    int i,vi,vj,e,n,c,query,x;

    while(1){

    scanf("%d",&n);
    bool input=false;
    bool own[MAX];

    if(n==0)
    {
        break;//program terminate if node=0
    }

    while(scanf("%d",&e)==1 && e!=0 )//taking edge. if 0 inputting of edge is stopped
    {

        while(scanf("%d",&vj)==1 && vj!=0 )//if 0 then all node connected to vi
        {
            G[e].push_back(vj);//vertex which are added to e by direction
            //cout<<e<<" "<<vj<<endl;
            input=true;
        }
    }


    scanf("%d",&query);
    while(query--)
    {

        c=0;
        vector<int>ans;

        //initializing visit for next query
        for(i=1;i<=n;i++)
        {
            visited[i]=0;
        }

        scanf("%d",&x);//starting node

        if(input)
        {
            DFS(x);
        }
        //DFS(x);

        for(i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                c++;
                ans.push_back(i);
            }
        }
        printf("%d",c);//number of unreached node
        for(i=0;i<c;i++)
        {
            printf(" %d",ans[i]);//printing unreached node
        }
        printf("\n");


    }
    for(i=1;i<=n;i++)//clearing graph
    {
        G[i].clear();
    }

    }//while 1
    return 0;
}



