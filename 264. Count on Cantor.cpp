#include<bits/stdc++.h>

using namespace std;

long long int counta[10000009],countb[10000009];

int main()
{
    long long int i,j,k,x,max=1000009;

    counta[0]=1;
    countb[0]=1;
    x=2;

    for(i=1,k=1;i<max,k<max;)
    {
        if(x%2==0)
        {
            for(j=1;j<=x;j++)
            {
                counta[i]=j;
                i++;
            }
            for(j=x;j>=1;j--)
            {
                countb[k]=j;
                k++;
            }
        }
        else
        {
            for(j=x;j>=1;j--)
            {
                counta[i]=j;
                i++;
            }
            for(j=1;j<=x;j++)
            {
                countb[k]=j;
                k++;
            }
        }
        x++;
    }
    /*for(i=0;i<101;i++)
    {
        printf("%lld %lld   ",i+1,counta[i]);
        printf("%lld %lld\n",i+1,countb[i]);
    }*/
    printf("%lld/%lld\n",counta[101],countb[101]);
    printf("%lld/%lld\n",counta[1001],countb[1001]);
    printf("%lld/%lld\n",counta[10001],countb[10001]);
    printf("%lld/%lld\n",counta[100001],countb[100001]);
    printf("%lld/%lld\n",counta[1000001],countb[1000001]);
    return 0;
}
