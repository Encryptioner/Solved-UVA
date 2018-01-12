#include <stdio.h>

unsigned long long int array[500000];

int main()
{
    freopen("299. Train Swapping .txt","r",stdin);
    unsigned long long int i,j,temp,N,L,count,com;

    scanf("%lld",&N);
    while(N--)
    {
        count=0;
        com=0;
        scanf("%lld",&L);
        for(i=0;i<L;i++)
        {
            scanf("%lld",&array[i]);
        }

        for(i=1;i<L;i++){//accepted
        for(j=L-1;j>=i;j--){
            if(array[j-1]>array[j])
                {
                count=count+1;
                temp=array[j-1];
                array[j-1]=array[j];
                array[j]=temp;
                }
                com++;
        }}

        printf("Optimal train swapping takes %lld swaps.\n",count);
    }

    return 0;
}

/*for(i=0;i<L-1;i++)//TLE
        {
            for(j=i+1;j<L;j++)
            {

                if(array[j]<array[i])
                {
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                    count++;
                }
                com++;
            }
        }*/
