#include <stdio.h>//Accepted

int main()
{
    unsigned long long int d,e,f;
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        else
        {
            d=a*a;
            e=b*b;
            f=c*c;

            if(d==(e+f) || e==(f+d) || f==(d+e))
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }
    }
    return 0;
}
