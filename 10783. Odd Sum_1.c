#include <stdio.h>//Accepted

int main()
{
    long long unsigned int a,b;
    unsigned int t,i=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld  %lld",&a, &b);
        if(a%2==0)
        {
            a=a+1;
        }
        if(b%2==0)
        {
            b=b-1;
        }
        printf("Case %d: %lld\n",++i , (((b+1)*(b+1))/4)-(((a-1)*(a-1))/4));
    }
    return 0;
}


//sum of n odd number = n*n;
