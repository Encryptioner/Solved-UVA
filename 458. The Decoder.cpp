#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("458. The Decoder.txt","r",stdin);
    string s;
    int i,l,x;
    while(getline(cin,s))
    {
        l=s.length();
        for(i=0;i<l;i++)
        {
            x=s[i];
            x=x-7;
            printf("%c",x);
        }
        cout<<"\n";
    }
    return 0;
}
