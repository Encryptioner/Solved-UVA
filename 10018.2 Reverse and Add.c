#include<stdio.h>//accepted

int main()
{
    //freopen("10018. Reverse and Add.txt","r",stdin);
    long long int n,x,b;
    int T,count;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld",&n);
        count=1;
        while(1)
        {
            x=n;
            b=0;
            while(n>0)
            {
                b=b*10+n%10;
                n=n/10;
            }
            if(x==b)
            {
                if(count==1)
                {
                    n=x+b;
                    count++;
                    continue;
                }
                break;
            }
            else
            {
                n=x+b;
                count++;
            }
        }
        printf("%d %lld\n",count-1,x);
    }
    return 0;
}
