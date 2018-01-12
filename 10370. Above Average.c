#include <stdio.h>//Accepted

int main()
{
    unsigned int C,N,i,above,sum,average;
    float ans;
    int array[1010];

    //freopen("10370. Above Average.txt","r",stdin);

    scanf("%d",&C);

    while(C--)
    {
        scanf("%d",&N);

        sum=average=above=0;

        for(i=0;i<N;i++)
        {
            scanf("%d",&array[i]);
            sum+=array[i];
        }
        average=sum/N;

        for(i=0;i<N;i++)
        {
            if(array[i]>average)
            {
                above+=1;
            }
        }

        ans=((float)above)/((float)N);

        printf("%.3f%%\n",ans*100);
    }
    return 0;
}

/*40.000%
57.143%
33.333%
66.667%
55.556%

*/
