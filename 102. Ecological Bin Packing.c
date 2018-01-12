#include <stdio.h>
int main()
{
    freopen("102.txt","r",stdin);
    long long g1,g2,g3,b1,b2,b3,c1,c2,c3;
    long long x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,y=0;
    while(scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9)
    {
        if(b1>=0 && g1>=0 && c1>=0 && b2>=0 && g2>=0 && c2>=0 && b3>=0 && g3>=0 && c3>=0)
        {
            x1=b2+b3+c1+c3+g1+g2;
            y=x1;
            x2=b2+b3+g1+g3+c1+c2;
            if(x2<y)
            {
                y=x2;
            }
            x3=g2+g3+b1+b3+c1+c2;
            if(x3<y)
            {
                y=x3;
            }
            x4=g2+g3+c1+c3+b1+b2;
            if(x4<y)
            {
                y=x4;
            }
            x5=c2+c3+b1+b3+g1+g2;
            if(x5<y)
            {
                y=x5;
            }
            x6=c2+c3+g1+g3+b1+b2;
            if(x6<y)
            {
                y=x6;
            }

            while(y>0)
            {
                if(y==x1)
                {
                    printf("BCG %lld\n",y);
                    break;
                }
                if(y==x2)
                {
                    printf("BGC %lld\n",y);
                    break;
                }
                if(y==x5)
                {
                    printf("CBG %lld\n",y);
                    break;
                }
                if(y==x6)
                {
                    printf("CGB %lld\n",y);
                    break;
                if(y==x3)
                {
                    printf("GBC %lld\n",y);
                    break;
                }
                if(y==x4)
                {
                    printf("GCB %lld\n",y);
                    break;
                }
                }
            }
        }
    }
    return 0;
}
/*
Critical Input:
9 8 7 6 5 4 3 2 1
238609294 238609294 238609294 238609294 238609294 238609294 238609294 238609294 238609294
85263245 25965748 69854785 15874569 36985745 12365478 36985526 32147859 96587458
123 654 789 963 258 741 159 963 357
123 987 12 852 963 987 963 159 753//ei conditioner jonno infinite loop e chole jai

Critical Output:
BCG 30
BCG 1431655764
BGC 193193965
CBG 2292
GCB 2862
*/
