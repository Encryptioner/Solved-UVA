#include<bits/stdc++.h>

using namespace std;

bool sieve[1000100];
bool dp[90000];

int main()
{
    freopen("10533. Digit Prime.txt","r",stdin);
    long long int max=1000010,p=90000;
    long long int prime[90000];
    long long int i,j,b,n,count,max1,x=0,T,t1,t2;

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
    dp[2]=1;
    x=2;
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
                dp[x]=1;
            }
        }
    }

    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld %lld",&t1,&t2);
        count=0;
        for(i=1;prime[i]<=t2;i++)
        {
            if(prime[i]>=t1 && dp[i]==1)
            {
                count++;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}

/*
for(i=1;prime[i]<=t2;i++)
        {
            if(prime[i]>=t1 && prime[i]<=t2)
            {

                for(j=i;prime[j]<=t2;j++)
                {
                    if(digit[j]==1 || digit[j]==2 || digit[j]==3 || digit[j]==5 || digit[j]==7 || digit[j]==11 || digit[j]==13 || digit[j]==17 || digit[j]==19 || digit[j]==23 || digit[j]==29 || digit[j]==31 || digit[j]==37 || digit[j]==41 || digit[j]==43 || digit[j]==47 || digit[j]==53)
                    {
                        count++;
                    }
                }
                break;
            }
        }
        */
