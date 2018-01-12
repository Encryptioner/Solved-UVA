#include<bits/stdc++.h>//not ok for above input
#define MAXN 210
#define MAXE 21000
using namespace std;

int main()
{
    //freopen("10004. Bicoloring(Bipartite checking).txt","r",stdin);
    int node,edge,node1,node2,i,j,k,list;
    while(cin>>node && node!=0)
    {
        cin>>edge;
        bool bipartite=true;
        vector<vector<int>>matrix(MAXN,vector<int>(MAXN));
        vector<int>EDGES[MAXE];
        for(i=0;i<edge;i++)
        {
            scanf("%d %d",&node1,&node2);
            EDGES[node1].push_back(node2);
            EDGES[node2].push_back(node1);
            matrix[node1][node2]=1;
            matrix[node2][node1]=1;
        }
        for(i=0;i<node;i++)
        {
            list=EDGES[i].size();
            cout<<"Connected node with node "<<i<<" :";
            for(j=0;j<list;j++)
            {
                cout<<" "<<EDGES[i][j];
            }
            printf("\n");
            if(list>1)
            {
                for(j=0;j<list-1;j++)
                {
                    int x=EDGES[i][j];
                    for(k=1;k<list;k++)
                    {
                        int y=EDGES[i][k];
                        if(matrix[x][y]==1)
                        {
                            bipartite=false;
                            printf("NOT BICOLORABLE.\n");
                            break;
                        }
                    }
                    matrix[i][j]=0;
                    if(bipartite==false)
                    {
                        break;
                    }
                }
                matrix[i][list-1]=0;
            }
            else
            {
                matrix[i][0]=0;
            }
            EDGES[i].clear();
            if(bipartite==false)
            {
                break;
            }
        }
        if(bipartite==true)
        {
            printf("BICOLORABLE.\n");
        }
    }
    return 0;
}
/*
5
5

0 1
1 2
2 3
3 4
4 0


6
6

1 0
2 0
3 2
4 3
5 4
4 1

*/
