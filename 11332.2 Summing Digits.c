#include <stdio.h>//Accepted

int main()
{
    unsigned long long int n;
    int i,g;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        if(n<10)
        {
            printf("%lld\n",n);
        }
        else
        {
            g=10;
            while(g>9)
            {
                g=0;
                while(n>0)
                {
                    g+=n%10;
                    n=n/10;
                }
                n=g;
            }
            printf("%d\n",g);
        }
    }
    return 0;
}
