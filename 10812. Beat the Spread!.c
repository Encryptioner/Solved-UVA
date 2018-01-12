#include <stdio.h>//Accepted

int main()
{
    freopen("10812. Beat the Spread!.txt","r",stdin);
    long long int t,s,d,sum,a,b;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&s,&d);

        sum=s+d;

        if(s<d || sum%2!=0)
        {
            printf("impossible\n");
        }
        else
        {
            a=sum/2;
            b=s-a;
            printf("%lld %lld\n",a,b);
        }
    }
    return 0;
}
