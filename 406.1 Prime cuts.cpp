#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

bool sieve[10000];
long long int prime[200];

int main()
{
    freopen("406. Prime cuts.txt","r",stdin);

    //bool sieve[5000];
    //cout<<sieve[577]<<" "<<sieve[40]<<" "<<sieve[965]<<endl;
    long long int max=10000;

    long long int i,j,N,C,count=0,max1,x=0;

    max1=sqrt(max);

    for(i=3;i<max1;i+=2)
    {
        for(j=(i*i);j<max;j+=(2*i))
        {
            sieve[j]=1;
        }
    }
    prime[0]=0;
    prime[1]=1;
    prime[2]=2;
    x=2;

    for(i=3;i<max;i+=2)
    {
        if(sieve[i]==0)
        {
            prime[++x]=i;//prime[] er size choto neoya hoye gese.. tai runtime error dekhai..
        }
    }
    /*for(i=1;i<=200;i++)
    {
        cout<<i<<" "<<prime[i]<<endl;
    }*/

    while(cin>>N && cin>>C)
    {
        for(i=1;i<200;i++)
        {
            if(prime[i]==N)
            {
                count=i;
                x=count/2;
                break;
            }
            else if(prime[i]>N)
            {
                count=i-1;
                x=count/2;
                break;
            }
        }
        if(C>x)
        {
            cout<<N<<" "<<C<<":";
            for(i=1;i<=count;i++)
            {
                cout<<" "<<prime[i];
            }
        }
        else if((count%2)==0)
        {
            cout<<N<<" "<<C<<":";
            for(i=x-C+1;i<=x+C;i++)
            {
                cout<<" "<<prime[i];
            }
        }
        else if((count%2)!=0)
        {
            cout<<N<<" "<<C<<":";
            for(i=x+1-C+1;i<=x+C;i++)
            {
                cout<<" "<<prime[i];
            }
        }
        cout<<"\n\n";
    }

    return 0;
}



/*#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int i,j,k;
    //i=j=25;
    for(k=3;k<32;k+=2){
        j=k;
    for(i=k*k;i<580;i=i+j*2)
    {
        cout<<i<<" ";
        if(i==577)
        {
            cout<<"yes\n";
        }

    }
    cout<<"\n\n";
    }
}
*/
