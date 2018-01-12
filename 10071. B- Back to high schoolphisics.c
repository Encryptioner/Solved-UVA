#include <stdio.h>//Accepted
int main()
{
    int v,t;
    while(scanf("%d %d",&v,&t)==2)
    {
        if(t<0)
        {
            printf("%d\n",2*(v*t*(-1)));
        }
        else
        {
            printf("%d\n",2*(v*t));
        }
    }
    return 0;
}
