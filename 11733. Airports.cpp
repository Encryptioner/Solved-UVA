#include<bits/stdc++.h>//Accepted MST problem solving using kruskal algorithm
#define MAXN 100001
using namespace std;

struct krus
{
	int u,v,w;
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

int mst(int n,int a)
{
    int i,j,l,u,v,val,count=1,c=0,state=1;
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
            if(data[i].w<a)
            {
                c+=data[i].w;
                par[u]=v;//if cost of building rode is less than building airport, then they are in same block
            }

            ++count;
            if(count==n)
            {
                break;
            }
        }
    }
    vector<int>parent;
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
            parent.push_back(val);//finding all separated block
        }
    }

    printf("%d %d\n",c+a*parent.size(),parent.size());//in all block we need to build airport and the road cost is c

    return 0;
}

int main()
{
    freopen("11733. Airports.txt","r",stdin);

    int i,j,u,v,w,n,e,a,T,c=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d ",&n,&e,&a);
        for(i=0;i<e;i++)
        {
            scanf("%d %d %d ",&u,&v,&w);
            krus o;
            o.u=u,o.v=v,o.w=w;
            data.push_back(o);
        }
        printf("Case #%d: ",++c);
        mst(n,a);
        data.clear();
    }
    return 0;
}
