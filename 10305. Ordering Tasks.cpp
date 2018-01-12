#include<bits/stdc++.h>//wrong answer
using namespace std;

#define MAX 102
#define For(i,n) for(i=1;i<=n;i++)

vector<int>G[MAX];
int siz[MAX],visited[MAX],in[MAX];

int main()
{
    //ios_base::sync_with_stdio(false);//only using this newline print earlier, with all a cout missing
    //cin.tie(0);//without only this newline print earlier
    //cout.tie(0);//with 1st 2 a cout missing
    freopen("10305. Ordering Tasks.txt","r",stdin);

    int n,m,I,K,M,x,y;

    while(cin>>n && cin>>m && n!=0 && m!=0)
    {
        memset(visited,0,sizeof(int)*(n+1));
        For(I,m)
        {
            cin>>x>>y;
            G[x].push_back(y);//x to y, y's list
            in[y]=in[y]+1;
            //cout<<in[y]<<endl;
        }
        For(I,n)
        {

            siz[I]=G[I].size();
            //cout<<I<<" "<<siz[I]<<" "<<visited[I]<<" "<<in[I]<<endl;
            if(visited[I]==0 && in[I]==0)
            {
                cout<<I<<" ";
                for(K=0;K<siz[I];K++)
                {
                    int v=G[I][K];
                    in[v]-=1;
                }
                visited[I]=1;
                G[I].clear();
                siz[I]=0;
                I=0;
            }
            bool flag=true;
            for(K=0;K<n;K++)
            {
                if(in[K]==0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        printf("\n");
    }

    return 0;
}



