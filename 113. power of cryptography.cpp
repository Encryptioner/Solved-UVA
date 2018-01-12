#include <iostream>//accepted
#include <cmath>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    long double p;
    long long n,i;
    //string s;
    //long double i;
    freopen("113. power of cryptography.txt","r",stdin);
    //while(scanf("%lld %s",&n,&s)==2)
    while(cin>>n && cin>>p)
    {
        /*p=0;
        for(i=0;i<s.length();i++)
        {
            p=((p*10)+(s[i]-'0'));
        }*/

        cout<<pow(p,pow(n,-1))<<endl;
        //cout<<pow(10,(log10(p)/n))<<endl;
    }
    return 0;
}
