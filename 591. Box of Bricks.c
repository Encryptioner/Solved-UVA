#include <stdio.h>//Accepted

int main()
{
    freopen("591. Box of Bricks.txt","r",stdin);
    int i,n,h,k,sum,set=0;
    int brick[5000];

    while(scanf("%d",&n)==1 && n!=0)
    {
        sum=0;
        k=0;
        set++;
        for(i=0;i<n;i++)
        {
            scanf("%d",&brick[i]);
            sum+=brick[i];
        }
        h=sum/n;
        for(i=0;i<n;i++)
        {
            if(brick[i]>h)
            {
                k+=(brick[i]-h);
            }
        }
        printf("Set #%d\n",set);
        printf("The minimum number of moves is %d.\n\n",k);
    }
    return 0;
}
