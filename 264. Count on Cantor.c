#include <stdio.h>//Accepted

int main()
{
    long long int N,m,n,x,y,i,j;
    freopen("264. Count on Cantor.txt","r",stdin);

    while(scanf("%lld",&N)==1)
    {
        for(n=1;;n++)
        {
            x=(n*(n+1))/2;
            if(N<=x)
            {
                break;
            }
        }
        m=x-n;

        if(n%2==0)
        {
            i=N-m;
            j=x-N+1;
        }
        else
        {
            i=x-N+1;
            j=N-m;
        }
        printf("TERM %lld IS %lld/%lld\n",N,i,j);
    }
    return 0;
}
