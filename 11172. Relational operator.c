#include<stdio.h>

int main()
{
    int n,i;
    long long a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld %lld",&a, &b);
        if(a<b)
        {
            printf("<\n");
        }
        if(a>b)
        {
            printf(">\n");
        }
        if(a==b)
        {
            printf("=\n");
        }
    }
     return 0;
}
