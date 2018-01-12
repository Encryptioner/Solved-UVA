#include<stdio.h>//not
#include<math.h>
#include<iostream>

using namespace std;
long long max1=50,max2=50;
bool sieve_1[max1][max2];
int main()
{

    long long i,j,n,count,max11,max22,x,k;

    //bool sieve_2[max2];

    for(i=2;i<=max1;i+=2)
    {
        for(j=1;j<=max2;j++)
        {
            sieve_1[i][j]=1;
        }
    }
    sieve_1[1][1]=1;

    max11=sqrt(max1);
    max22=pow(max2,2);

    for(i=1;i<=(max1);i+=2)
    {
        x=1;
        for(j=(i*i),k=j;j<max22;j+=(2*i))
        {

            if(j>=max1)
            {
                k=j-(max1*x);
            }
            if((j+2*i)>=(max1*(x+1)))
            {
                ++x;
            }
            sieve_1[k][x]=1;
        }
    }

    while(1)
    {
        cin>>n;
        count=0;
        for(i=1;i<=max2;i++)
        {
            for(j=1;j<=max1;j+=2)
            {
            cout<<"jj526535g\n";
            if(sieve_1[j][i]==0 && sieve_1[j+2][i]==0)
            {
                cout<<"jjhjgg\n";
                if((++count)==n)
                {
                    printf("(%lld, %lld)\n",i,i+2);
                    break;
                }
            }
            else if(sieve_1[j][i]==0 && (j+2)>max1 && sieve_1[1][i+1]==0)
            {
                cout<<"256461\n";
                if((++count)==n)
                {
                    printf("(%lld, %lld)\n",i,i+2);
                    break;
                }
            }

            }
        }
    }
}


