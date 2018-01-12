#include<bits/stdc++.h>//Accepted
#include<cmath>

using namespace std;

bool sieve[1200];

int main()
{
    freopen("406. Prime cuts.txt","r",stdin);
    int max=1200,p=200;
    int prime[200];
    int i,j,N,C,count=0,max1,x=0;
    max1=sqrt(max);

    for(i=3;i<max1;i+=2)
    {
        for(j=(i*i);j<max;j+=(2*i))
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

    while(cin>>N && cin>>C)
    {
        for(i=1;i<p;i++)
        {
            if(prime[i]==N)
            {
                count=i;
                x=count/2;
                break;
            }
            if(prime[i]>N)
            {
                count=i-1;
                x=count/2;
                break;
            }
        }
        cout<<N<<" "<<C<<":";

        if(C>x)
        {
            for(i=1;i<=count;i++)
            {
                cout<<" "<<prime[i];
            }
        }
        else if((count%2)==0)
        {
            for(i=x-C+1;i<=x+C;i++)
            {
                cout<<" "<<prime[i];
            }
        }
        else
        {
            for(i=x+1-C+1;i<=x+C;i++)
            {
                cout<<" "<<prime[i];
            }
        }
        cout<<"\n\n";
    }

    return 0;
}

