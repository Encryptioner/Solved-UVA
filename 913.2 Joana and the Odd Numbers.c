#include<stdio.h>//Submiited

int main()
{
    freopen("913 Joana and the Odd Numbers.txt","r",stdin);

    long long int n,i,j,c,x,y=5000000000;
    long long int head,phead=0;

    while(scanf("%lld",&n)==1)
    {

        c=(n-1)/2;
        c=c+1;
        x=1;
        head=1;
        i=2;
        if(c>=y)
        {
            i=y+2;
            x=j;
            head=phead;
        }
        for(;i<=(c+1);i++)
        {
            head+=2*x;
            x+=2;
        }
        y=c;
        j=x;
        phead=head;
        printf("%lld\n",3*head-12);
    }
    return 0;
}

