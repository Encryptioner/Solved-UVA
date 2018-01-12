#include <iostream>
//#include<cstdio>

using namespace std;
int main()
{
    long long a,b;
    //((cin>>a>>b));  /* while((cin>>a>>b)==2) does not work */
    while(cin>>a>>b)
    {
        long long ans=a-b;
        if(ans<0)
        {
            cout<<((ans)*(-1))<<endl;
        }
        else
            cout<<ans<<endl;
    }
}
