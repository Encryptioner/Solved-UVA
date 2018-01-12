#include<bits/stdc++.h>//Accepted

using namespace std;

bool sieve[1000001];

long long int power(long long int x1,long long int j)
{
    long long int y=x1;

    if(j==0)
    {
        x1=1;
    }
    while(j>1)
    {
        x1=x1*y;
        j--;
    }
    return x1;
}

int main()
{
    freopen("10539. Almost Prime.txt","r",stdin);
    long long int max=1000001;
    long long int prime[80000];
    long long int i,j,k,count,max1,x,T,t1,t2,m=80071,n;
    vector<long long int>alprime(m);

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
    m=0;
    n=power(2,2);
    for(k=3;n<=1000000000000;k++)
    {
        alprime[m]=n;
        m++;
        n=power(2,k);
    }
    for(i=3;i<max;i+=2)
    {
        if(sieve[i]==0)
        {
            prime[++x]=i;
            n=power(i,2);
            for(k=3;n<=1000000000000;k++)
            {
                alprime[m]=n;
                m++;
                n=power(i,k);
            }
        }
    }
    alprime[80070]=1000000000001;
    sort(alprime.begin(),alprime.end());

    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld %lld",&t1,&t2);
        count=0;

        for(i=0;alprime[i]<=t2;i++)
        {
            if(alprime[i]>=t1)
            {
                count++;
            }
        }
        printf("%lld\n",count);
    }

return 0;
}
