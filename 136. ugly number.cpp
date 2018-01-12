#include <iostream>//859963392
#include <cstdio>


using namespace std;

int main()
{
    long long i,n=0,x=0,c=0;

    for(x=1; ;x++)
    {
        cout<<x<<endl;
        n=x;

        for(i=2; ; )
        {
            cout<<i<<" "<<n<<endl;
            if(n==1)
            {
                c++;
                cout<<c<<endl;
                break;
            }

            if(n%i==0)
            {
                n=n/i;
            }

            else if(n%i!=0)
            {
                i++;
            }

            if(i>5)
            {
                break;
            }
            cout<<" "<<i<<" "<<n<<endl;
        }

        cout<<endl;

        if(c==15)
        {
            cout<<x<<endl;
            break;
        }
    }
    return 0;
}
