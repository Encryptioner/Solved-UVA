#include<bits/stdc++.h>//Accepted

using namespace std;

bool sieve[2500];

int main()
{
    freopen("10789. Prime Frequency.txt","r",stdin);
    int max=2500,p=500;
    int prime[500];
    int i,j,k,l,count,max1,x=0,T,t=0;
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

    cin>>T;
    while(T--)
    {
        cin>>s;
        l=s.length();
        string a;
        t++;
        for(i=0;i<l;i++)
        {
            count=1;
            if(s[i]!='*')
            {
                for(j=i+1;j<l;j++)
                {
                    if(s[i]==s[j])
                    {
                        s[j]='*';
                        count++;
                    }
                }
            }
            for(k=2;k<x;k++)
            {
                if(prime[k]>=count)
                {
                    if(prime[k]==count)
                    {
                        a+=s[i];
                    }
                    break;
                }
            }
        }
        sort(a.begin(),a.end());
        l=a.length();
        printf("Case %d: ",t);
        if(l==0)
        {
            printf("empty\n");
        }
        else
        {
            cout<<a<<endl;
        }
    }
    return 0;
}
