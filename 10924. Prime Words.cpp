#include<bits/stdc++.h>//Accepted

using namespace std;

bool sieve[2000];

int main()
{
    freopen("10924. Prime Words.txt","r",stdin);
    int max=2000,p=500;
    int prime[500];
    int i,j,l,count,max1,x=0;
    string s;

    max1=sqrt(max);

    for(i=3;i<max1;i+=2)
    {
        for(j=i*i;j<max;j+=2*i)
        {
            sieve[j]=1;
        }
    }
    prime[1]=1;
    prime[2]=2;
    x=2;
    for(i=3;i<max;i+=2)
    {
        if(sieve[i]==0)
        {
            prime[++x]=i;
        }
    }

    while(cin>>s)
    {
        l=s.length();
        count=0;

        for(i=0;i<l;i++)
        {
            if((s[i]>64 && s[i]<91) || (s[i]>96 && s[i]<123))
            {
            if(s[i]>96)
            {
                count+=s[i]-96;
            }
            else
            {
                count+=s[i]-(64-26);
            }
            }
            else
            {
                count=0;
            }
        }
        for(i=1;i<x;i++)
        {
            if(prime[i]>=count)
            {
                if(prime[i]==count)
                {
                    cout<<"It is a prime word.\n";
                }
                else
                {
                    cout<<"It is not a prime word.\n";
                }
                break;
            }
        }
    }
    return 0;
}
