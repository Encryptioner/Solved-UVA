#include <iostream>//Accepted
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string s = "";
    long long i,j,l;
    bool swap = true;

    while(getline(cin,s))
    {
        l=s.length();

        for(i=0;i<l;i++)
        {
            if(s[i]==34 && swap)
            {
                printf("%c%c",96,96);
                swap = false;
            }
            else if(s[i]==34 && swap == false)
            {
                printf("%c%c",39,39);
                swap = true;
            }
            else
            {
                printf("%c",s[i]);
            }
        }
        cout<<endl;
    }

    return 0;
}

