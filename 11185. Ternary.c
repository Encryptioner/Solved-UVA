#include<stdio.h>//Accepted

int main()
{
    freopen("11185. Ternary.txt","r",stdin);
    long long int n,i,j,base[10000];


    /*printf("%lld\n",849*23);
    scanf("%llx",&i);
    scanf("%llx",&j);
    printf("%llx\n",i*j);
    printf("%lld\n",i*j);*/

    while(scanf("%lld",&n)==1)
    {
        i=0;
        if(n<0)
        {
            break;
        }
        else if(n==0)
        {
            printf("0\n");
        }

        else
        {
            //while(n!=0)
            while(n>0)
            {
                base[i]=n%3;
                n=n/3;
                i++;
            }
            for(j=i-1;j>=0;j--)
            {
                printf("%lld",base[j]);//for base 16 printf("%llx",base[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
