#include <iostream>
using namespace std;


int main()
{
    unsigned int n;
    cin>>n;
    //while(cin>>n && n!=0)
    while(n!=0)
    {
        if(n==0)//no need of this if condition
        {
            break;
        }
        if(n<=100)
        {
            cout<<"f91("<<n<<") = 91"<<endl;
        }
        else
        {
            cout<<"f91("<<n<<") = "<<n-10<<endl;
        }
        cin>>n;
    }
    return 0;
}

