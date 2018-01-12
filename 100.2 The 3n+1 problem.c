#include <stdio.h>//Accepted
int main()
{
    long long int i,j,a,b,I,J;
    long long int count,maxcl;

    while(scanf("%lld %lld",&i,&j)==2)
    {
        I=i;
        J=j;
        maxcl=0;
        if(i>j)
        {
            i=i+j;
            j=i-j;
            i=i-j;
                                                                                                                                                                                                                    printf("%lld %lld\n",i,j);
        }
            for(a=i;a<=j;a++)
            {
                count=1;

            b=a;
                while(b!=1)
                {
                    if(b%2==0)
                    {

                        b=b/2;
                        count++;
                    }
                    else
                    {
                        b=3*b+1;
                        count++;
                    }

                }
                if(count>maxcl)
                {
                    maxcl=count;
                }
            }
    printf("%lld %lld %lld\n",I,J,maxcl);
    }
    return 0;
}

