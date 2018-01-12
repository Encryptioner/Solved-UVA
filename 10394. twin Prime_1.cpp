#include<iostream>//Accepted
#include<cmath>
#include<ctime>
#include<cstdio>

using namespace std;

bool sieve[18410000];

long long int prime[100001];

int main()
{
    time_t start,end;
    start=clock();
    freopen("10394. twin Prme_1.txt","r",stdin);


    long long int max=18410000;
    long long int i,j,n,count,max1,n1,i1,x;

    cout<<sieve[577]<<" "<<sieve[40]<<" "<<sieve[77]<<endl;

    /*for(i=4;i<max;i+=2)
    {
        sieve[i]=1;
    }*/

    max1=sqrt(max);

    for(i=3;i<max1;i+=2)
    {
        for(j=(i*i);j<max;j+=(2*i))
        {
            sieve[j]=1;
        }
    }

    x=0;

    for(i=3;i<max;i+=2)
    {
        if(sieve[i]==0 && sieve[i+2]==0)
        {
            prime[++x]=i;
        }
    }
    //cout<<prime[50];
    while(cin>>n)
    {
        cout<<"("<<prime[n]<<", "<<prime[n]+2<<")"<<endl;
    }

    /*while(cin>>n)
    {
        if(n>n1)
        {
            //i=i1;
            count=n1;
        }
        else
        {
            count=0;
            i1=3;
        }
        //count=0;
        //i1=3;
        for(i=i1;i<max;i+=2)
        {
            if(sieve[i]==0 && sieve[i+2]==0)
            {
                ++count;
                if(count==n)
                {
                    cout<<"("<<i<<", "<<i+2<<")"<<endl;
                    n1=n;
                    //cout<<"  "<<i+2<<endl;
                    i1=i+2;
                    break;
                }
            }
        }
    }*/

    end=clock();

    float time=((float)(end-start))/CLOCKS_PER_SEC;
    cout<<"\nTime = "<<time<<endl;
    return 0;
}

