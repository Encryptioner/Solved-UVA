#include<bits/stdc++.h>//Accepted

using namespace std;

bool sieve[100000];
long long int prime[6000];

int main()
{
    freopen("583. Prime Factors .txt","r",stdin);
    long long int n,n1,i,j,count;
    bool negative=false;
    long long int max=sqrt(pow(2,31))+2100,max1,x;
    max1=sqrt(max);

    for(i=3;i<max1;i+=2)
    {
        for(j=(i*i);j<max;j+=(2*i))
        {
            sieve[j]=1;
        }
    }

    x=0;
    prime[x]=2;
    for(i=3;i<max;i+=2)
    {
        if(sieve[i]==0)
        {
            prime[++x]=i;
        }
    }

    while(cin>>n && n!=0)
    {
    cout<<n<<" = ";
    if(n<0)
    {
        n=n*(-1);
        negative=true;
        printf("-1 x ");
    }
    n1=n;
    count=0;
    for(i=0;prime[i]<=sqrt(n);i++)
    {
        if(n%prime[i]==0)
        {
            if(count>0)
            {
                printf(" x ");
                count=0;
            }
            while(n%prime[i]==0)
            {
                n=n/prime[i];
                count++;
                if(count>1)
                {
                    cout<<" x "<<prime[i];
                }
                else
                {
                    cout<<prime[i];
                }
            }
        }
    }

    if(n!=1)
    {
        if(n1!=n)
        {
            cout<<" x "<<n<<"\n";
        }
        else
        {
            cout<<n<<endl;
        }
    }
    else
    {
        printf("\n");
    }
    negative=false;
    }
    return 0;
}


