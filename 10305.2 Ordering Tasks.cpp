#include<bits/stdc++.h>//Accepted O(V=E), not in order of input
using namespace std;

#define MAX 102
#define For(i,n) for(i=1;i<=n;i++)

vector<int>G[MAX];
int in[MAX],pri[MAX];

int main()
{
    //freopen("10305. Ordering Tasks.txt","r",stdin);

    int n,m,I,K,M,x,y,cnt,u,siz,assign,node1,node2;

    map<int,int>mymap;

    while(cin>>n && cin>>m)
    {
        if(n==0 && m==0)
        {
            break;
        }
        vector<int>top_order;
        //priority_queue<int, vector<int>, std::greater<int> > q;//sort data in increasing order
        queue<int>q;
        cnt=0;
        assign=1;
        memset(in,0,sizeof(int)*(n+1));
        memset(pri,0,sizeof(int)*(n+1));

        For(I,m)
        {
            cin>>node1>>node2;
            if(mymap.find(node1)==mymap.end())
            {
                mymap[node1]=assign;
                pri[assign]=node1;//to print int to string
                assign++;
            }
            x=mymap[node1];

            if(mymap.find(node2)==mymap.end())
            {
                mymap[node2]=assign;
                pri[assign]=node2;//to print int to string
                assign++;
            }
            y=mymap[node2];

            G[x].push_back(y);//x to y, y's list
            in[y]=in[y]+1;
            //cout<<x<<" "<<y<<" "<<in[y]<<endl;
        }
        For(I,n)
        {
            if(mymap.find(I)==mymap.end())//if any node has no indegree and outdegree
            {
                mymap[I]=assign;
                pri[assign]=I;//to print int to string
                //cout<<I<<" mapped to "<<assign<<endl;
                assign++;

            }
            //x=mymap[I];
            //printf("\n");
            //cout<<in[I]<<" ";
            if(in[I]==0)
            {
                q.push(I);
            }
        }
        //printf("\n");
        while (!q.empty())
        {
            //u = q.top();
            u=q.front();
            q.pop();
            top_order.push_back(u);
            siz=G[u].size();

            //cout<<u<<"   "<<siz<<endl;

            for(K=0;K<siz;K++)
            {
                x=G[u][K];
                in[x]-=1;
                //cout<<x<<"  v "<<in[x]<<endl;
                if(in[x]==0)
                {
                    q.push(x);
                }
            }
            cnt++;
        }
        siz=top_order.size();
        for(K=0;K<siz-1;K++)
        {
            assign=top_order[K];
            cout<<pri[assign]<<" ";
        }
        assign=top_order[K];
        cout<<pri[assign]<<endl;
        mymap.clear();
    }

    return 0;
}
