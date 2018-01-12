#include <stdio.h>//Accepted
#include <math.h>

int main()
{
    unsigned long long int x,s,p;

    while(scanf("%lld",&x)==1)
    {
        p=(x*(x+1))/2;
        s=p*p;
        printf("%lld\n",s);
    }
    return 0;
}
