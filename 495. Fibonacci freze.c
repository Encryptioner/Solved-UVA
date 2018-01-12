#include<stdio.h>//java solution

long long array[5000];


int main()
{

    int i,n;

    array[1]=array[2]=1;

    for(i=3;i<=5000;i++)
    {
        array[i]=array[i-1]+array[i-2];
        //printf("gjjh\n");
    }

    while(scanf("%d",&n)==1)
    {
        printf("%0.0lld\n",array[n]);
    }

    return 0;
}
