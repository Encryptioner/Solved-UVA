#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("11934. Magic Formula.txt","r",stdin);
    long long int a,b,c,d,l;
    long long int i,v,count;
    while(cin>>a && cin>>b && cin>>c && cin>>d && cin>>l && (a!=b!=c!=d!=l!=0))
    {
        count=0;
        for(i=0;i<=l;i++)
        {
            v=a*i*i+b*i+c;
            if(v%d==0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
