#include <stdio.h>//Accepted

int main()
{
    long long int n;

    while(scanf("%lld",&n)==1 && n>=0)
    {
        printf("%lld\n",((n*n)+n+2)/2);
    }
    return 0;
}
