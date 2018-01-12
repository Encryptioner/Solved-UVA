#include <stdio.h>//Accepted

int main()
{
    //freopen("10346. Peter’s Smokes.txt","r",stdin);
    long long int n,k,count,p=0;

    while(scanf("%lld",&n)==1 && scanf("%lld",&k)==1 && k>1)
    {
        count=n;
        while(n>=k)
        {
             printf("%lld %lld %lld \n",p,n,count);
            p=n/k;
            count+=p;
            n=p+(n%k);
            printf("%lld %lld %lld \n",p,n,count);
        }
        printf("%lld\n",count);
    }

    return 0;
}
