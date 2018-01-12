#include<stdio.h>//Accepted

int main()
{
    freopen("11044. Searching For Nessy.txt","r",stdin);

    long long int t,r,c,x,y;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld",&r,&c);
        r=r-2;
        c=c-2;
        if(r%3==0)
        {
            x=r/3;
        }
        else
        {
            x=r/3+1;
        }

        if(c%3==0)
        {
            y=c/3;
        }
        else
        {
            y=c/3+1;
        }

        printf("%lld\n",x*y);
    }
return 0;
}
