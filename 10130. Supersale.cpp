#include<bits/stdc++.h>//Accepted
#define MAX_N 1001
#define MAX_W 31
using namespace std;

int n,CAP;
bool vis[MAX_N][MAX_W];
int dp[MAX_N][MAX_W];
int weight[MAX_N] , cost[MAX_N];

int func(int i,int w)
{
	//cout<<"func "<<i<<" "<<w<<endl;
	int profit1=0,profit2=0;

	if(i==n+1)
    {
        return 0;
    }
	if(vis[i][w]!=0)
    {
        //cout<<"again "<<i<<" "<<w<<" "<<dp[i][w]<<endl;
        return dp[i][w];
    }
	if(w+weight[i]<=CAP)
    {
        profit1=cost[i]+func(i+1,w+weight[i]);//for getting a item
    }
	profit2=func(i+1,w);//for excluding that item
	dp[i][w]=max(profit1,profit2);
	vis[i][w]=1;
	//cout<<i<<" "<<w<<" "<<dp[i][w]<<" "<<profit1<<" "<<profit2<<" "<<endl;
	return dp[i][w];
}
int main()
{
	//freopen("10130. Supersale.txt","r",stdin);
	int g,T;
	scanf("%d",&T);
	while(T--)
    {
        int val=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d %d\n",&cost[i],&weight[i]);
        }
        scanf("%d",&g);
        for(int i=0;i<g;i++)
        {
            scanf("%d",&CAP);
            val+=func(1,0);
            memset(vis,0,sizeof(vis));
        }
        printf("%d\n",val);
    }
	return 0;
}

