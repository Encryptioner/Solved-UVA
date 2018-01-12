#include <stdio.h>//Accepted

int main()
{
    int n,x,k;


    while(scanf("%d",&n)==1)
    {
        if(n<4)
        {
            if(n==3)//if(n==2 || n==3)
            {
                printf("%d\n",n+1);
            }
            else
            {
                printf("%d\n",n);
            }
        }
        else
        {
            printf("%d\n",n+n/2);
        }
    }

    return 0;
}
