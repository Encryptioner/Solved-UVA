#include<iostream>//Accepted
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    long long int i,n;

    long long int array[3100],difference[3100];

    while(scanf("%lld",&n)==1)
    {
        bool x=true;

        for(i=0;i<n;i++)
        {
            cin>>array[i];
        }

        for(i=0;i<n-1;i++)
        {
            difference[i]=abs(array[i+1]-array[i]);
        }

        sort(difference,difference+n-1);

        for(i=0;i<n-1;i++)
        {
            if(difference[i]!=(i+1))
               {
                   cout<<"Not jolly"<<endl;
                   x=false;
                   break;
               }

        }

        if(x!=false || (n==1 && array[i]==1))
        {
            cout<<"Jolly"<<endl;
        }
    }
    return 0;
}
//difference[i]!=1 || difference[n-2]!=(n-1) ||

/*for(i=1;i<n;i++)
        {
            difference[i]=abs(array[i]-array[i-1]);
            sort(difference,difference+n);
        }


        cout<<"\n";

        for(i=1;i<n;i++)
        {
            cout<<difference[i]<<endl;
            /*if(difference[i]!=1 || difference[n-1]!=(n-1) || difference[i+1]!=(i+1))
               {
                   cout<<"Not jolly"<<endl;
                   x=false;
                   break;
               }
        }*/
