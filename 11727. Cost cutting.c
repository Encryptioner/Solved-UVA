#include<stdio.h>//Accepted
int main()
{
    int i,n,a,b,c;
    scanf("%d",&n);
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d %d %d",&a,&b,&c);

            if((a>b && a<c ) || (a<b && a>c))
            {
                printf("Case %d: %d\n",i,a);
            }

            if((b>a && b<c) || (b<a && b>c))
            {
                printf("Case %d: %d\n",i,b);
            }

            if((c>a && c<b) || (c<a && c>b))
            {
                printf("Case %d: %d\n",i,c);
            }
        }
    }
    return 0;
}
