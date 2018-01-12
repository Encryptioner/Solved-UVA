#include <stdio.h>
{
    long long int i,j,a,b;
    long long int count,maxcl;
    while(scanf("%lld %lld",&i,&j)==2)
    //scanf("%lld %lld",&i,&j);
    {
        maxcl=0;
        if(i>j)
        {
            i=i+j;
            j=i-j;
            i=i-j;
        }
            for(a=i;a<=j;a++)
            {
                count=1;
               // maxcl=0;
            b=a;
                while(b!=1)
                {
                    if(b%2==0)
                    {
                        //count++;
                        b=b/2;
                        //printf("%lld\n",b);
                        //printf("%lld\n",count);
                        count++;
                    }
                    else
                    {
                        b=3*b+1;
                        count++;
                    }
                  //  printf("%%lld %lld\n",i,count);
                    //clength=count;
                }

                //clength=count;
                if(count>maxcl)
                {
                    maxcl=count;
                }
            }
    printf("%lld %lld %lld\n",i,j,maxcl);
    }

    return 0;
}
