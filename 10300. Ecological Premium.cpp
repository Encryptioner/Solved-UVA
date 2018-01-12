#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("10300. Ecological Premium.txt","r",stdin);
    long long int n,f,a,s,p,sum,i;
    cin>>n;
    while(n--)
    {
        cin>>f;
        sum=0;
        for(i=0;i<f;i++)
        {
            cin>>a>>s>>p;
            sum+=a*p;
        }
        cout<<sum<<endl;
    }
    return 0;
}
