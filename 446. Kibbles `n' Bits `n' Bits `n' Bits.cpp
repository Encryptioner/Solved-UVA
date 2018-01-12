#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("446. Kibbles `n' Bits `n' Bits `n' Bits.txt","r",stdin);
    long long int T,n1,n2,n,i,j;
    long long int base2[20];
    char c;

    cin>>T;
    while(T--)
    {
        scanf("%llx",&n1);
        getchar();
        scanf("%c",&c);
        scanf("%llx",&n2);

        if(c=='+')
        {
            n=n1+n2;
        }
        else
        {
            n=n1-n2;
        }

        if(n1<=0)
        {
            printf("0000000000000");
        }
        else
        {
            i=0;
            while(n1>0)
            {
                base2[i]=n1%2;
                n1=n1/2;
                i++;
            }
            for(j=15;j>(i-1);j--)
            {
                base2[j]=0;
            }
            for(j=12;j>=0;j--)
            {
                printf("%lld",base2[j]);
            }
        }
        printf(" %c ",c);
        if(n2<=0)
        {
            printf("0000000000000");
        }
        else
        {
            i=0;
            while(n2>0)
            {
                base2[i]=n2%2;
                n2=n2/2;
                i++;
            }
            for(j=15;j>(i-1);j--)
            {
                base2[j]=0;
            }
            for(j=12;j>=0;j--)
            {
                printf("%lld",base2[j]);
            }
        }
        printf(" = %lld\n",n);
    }
    return 0;
}
