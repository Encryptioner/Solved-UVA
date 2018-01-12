#include<iostream>//Accepted
using namespace std;

int main()
{
    int n,i;
    long long a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a<b)
        {
            cout<<"<\n";
        }
        if(a>b)
        {
            cout<<">\n";
        }
        if(a==b)
        {
            cout<<"=\n";
        }
    }
     return 0;
}


