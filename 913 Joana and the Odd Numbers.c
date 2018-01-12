#include<stdio.h>

int main()
{
    freopen("913 Joana and the Odd Numbers.txt","r",stdin);

    long long int n,i,c,x,y;
    long long int head[50000000 ];
    head[0]=1;
    x=1;
    for(i=1;head[i-1]<=10000000000;i++)
    {
        head[i]=head[i-1]+2*x;
        x=x+2;
    }
    /*for(i=0;head[i]<=1000000000;i++)
    {
        printf("%d %lld ",i,head[i]);
    }*/
    printf("54854\n");
    printf("%lld\n",head[49999999]);
    while(scanf("%lld",&n)==1)
    {
        //printf("\n%lld",n);
        c=(n-1)/2;
        printf("%lld\n",c);
        printf("%lld\n",head[c+1]);
        y=3*head[c+1]-12;
        printf("54854\n");
        //printf("%lld\n",head[c+1]-2+head[c+1]-4+head[c+1]-6);
        printf("%lld\n",y);

    }

    return 0;
}
