#include <iostream>
#include <string>

using namespace std;

int main()
{
    int l=0,i,sum=0;
    string n;
    while(cin>>n && (n[0]!='0'))//n[1]=='\0'
    {
        while(sum=0 || sum>10)
        {
            l=n.length();
            cout<<l<<endl;
            for(i=0;i<l;i++)
            {
                sum+=n[i]-'0';
            }
            cout<<sum<<endl;

        }

    }
}
