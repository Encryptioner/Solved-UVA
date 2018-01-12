#include<stdio.h>//Accepted

int main()
{
    long long int t,n,x,y;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);

        n=n*567;
        n=n/9+7492;
        n=n*235;
        n=n/47-498;

        x=n/10;
        y=x%10;

        if(y<0)
        {
            y=y*(-1);
        }

        printf("%lld\n",y);
    }
    return 0;
}
