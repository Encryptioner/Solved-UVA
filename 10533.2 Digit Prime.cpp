#include<bits/stdc++.h>//Accepted

using namespace std;

bool sieve[1000010];
long long int digit[1000010];

int main()
{
    freopen("10533. Digit Prime.txt","r",stdin);
    long long int max=1000010;
    long long int prime[90000];
    long long int i,j,b,n,max1,x,y,T,t1,t2,c;

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
    digit[1]=0;
    digit[2]=1;
    x=2;
    y=2;
    c=1;
    for(i=3;i<max;i+=2)
    {
        if(sieve[i]==0)
        {
            prime[++x]=i;
            b=0;
            n=i;
            while(n>0)
            {
                b+=n%10;
                n=n/10;
            }
            if(b==2 || b==3 || b==5 || b==7 || b==11 || b==13 || b==17 || b==19 || b==23 || b==29 || b==31 || b==37 || b==41 || b==43 || b==47 || b==53)
            {
                c++;
            }
        }
        digit[++y]=c;
        digit[++y]=c;
    }

    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld %lld",&t1,&t2);

        printf("%lld\n",digit[t2]-digit[t1-1]);
    }
    return 0;
}

