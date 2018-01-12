#include <iostream>//Accepted
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    string s;
    long long n,i,l;

    freopen("10902. You can say 11.txt","r",stdin);

    while(cin>>s && s!="0")
    {

        n=0;
        l=s.length();

        for(i=0;i<l;i++)
        {
            n=((n*10)+(s[i]-'0'));
            n=n%11;
        }

        if(n==0)
        {
            cout<<s<<" is a multiple of 11.\n";
        }
        else
        {
            cout<<s<<" is not a multiple of 11.\n";
        }
    }

    return 0;
}

