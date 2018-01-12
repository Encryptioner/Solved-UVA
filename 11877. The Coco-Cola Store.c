#include <stdio.h>//Accepted

int main()
{
    int n,x;

    //while(scanf("%d %d",&n,&x)==1)

    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        else if(n<4)
        {
            if(n==3)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else
        {
            printf("%d\n",n/2);
        }
    }

    return 0;
}
