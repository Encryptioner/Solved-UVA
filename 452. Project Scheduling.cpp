#include<bits/stdc++.h>//Accepted
using namespace std;

#define MAX 30
#define For(x,i,n) for(i=x;i<n;i++)

vector<int>G[MAX];
int cost[MAX],CP[MAX];//CP=Critical Path

queue<int>q;
int ans=0;

int node_cost(string str)//find node cost from input
{
    int len,I,x=str[2]-48;

    len=str.length();

    for(I=3;I<len;I++)
    {
        if(str[I]==' '){break;}
        x=x*10+str[I]-48;
    }
    return x;
}
int node_adjacent(string str)//find adjacent node and CP of some node
{
    int len,I,x=0,node=str[0]-64,temp=0;
    bool cp=true;

    len=str.length();

    For(3,I,len)
    {
        if(str[I]>='A' && str[I]<='Z')
        {

            temp=str[I]-64;
            G[node].push_back(temp);
            x=max(x,CP[temp]);//fand max CP of adjacent node
            if(CP[temp]==0)//if CP of any adjacent node is unknown we can't get CP of node
            {
                cp=false;
            }
            //cout<<node<<" push "<<temp;
        }
    }

    len=G[node].size();
    //cout<<node<<" len "<<len<<" "<<cost[node];
    if(len==0)//if no adjacent node
    {
        CP[node]=cost[node];
    }
    if(cp==true && len!=0)//if CP can known from previous input
    {
        CP[node]=x+cost[node];
    }
    else
    {
        q.push(node);
    }
    if(CP[node]>ans)//find maximum CP as answer
    {
        ans=CP[node];
    }
    return 0;
}
int schedule(int u))//if CP can't be known from previous input
{
    int I,len,Max,x;

    if(CP[u]==0)//if CP can't be known from previous input
    {
        Max=0;
        len=G[u].size();
        For(0,I,len)//check all adjacent node
        {
            x=G[u][I];
            if(CP[x]!=0)
            {
                Max=max(Max,CP[x]);
            }
            else
            {
                schedule(x);//if CP of adjacent node is unknown goes to find it
                Max=max(Max,CP[x]);//find maximum CP of adjacent node
            }
        }
        CP[u]=cost[u]+Max;
        ans=max(ans,CP[u]);//finding ans
    }
    return 0;
}
int main()
{
    //reopen("452. Project Scheduling.txt","r",stdin);
    int node,t,I,K,M,u;
    string str;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {

        getline(cin,str);
        if(str!="")
        {
            node=str[0]-64;
            if(cost[node]==0)//if cost of one node is previously inputted
            {
                cost[node]=node_cost(str);
                node_adjacent(str);
            }
            t=t+1;//to get input of same test case
            //cout<<node<<" "<<cost[node]<<"   "<<CP[node]<<endl;
            continue;
        }

        while(!q.empty())
        {
            u=q.front();
            q.pop();
            schedule(u);
        }
        printf("%d\n",ans);
        if(t!=0){printf("\n");}
        ans=0;
        For(0,I,MAX)
        {
            G[I].clear();
            cost[I]=0,CP[I]=0;
        }
    }
    return 0;
}
