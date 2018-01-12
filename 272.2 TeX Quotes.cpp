#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    //char s[1000];
    //string s;
    //p.getline();
    string s = "";
    long long i,j,x,l;
    bool swap = true;

    freopen("272. TeX Quotes.txt","r",stdin);

    while(getline(cin,s))
    {
        //cout<<"input is\n\n"<<s<<endl;
        //x=1;
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
