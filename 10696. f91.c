#include <stdio.h>//Accepted

int f91(int n)
{
    if(n<=100)
    {
        return f91(f91(n+11));
    }
    else
        return (n-10);
}

int main()
{
    unsigned int n;
    //while(scanf("%d",&n)==1 && n!=0)
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        //if(n<=100)
        {
            printf("f91(%d) = %d\n",n,f91(n));
        }
    }
    return 0;
}

/*
or

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

*/
