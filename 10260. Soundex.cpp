#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("10260. Soundex.txt","r",stdin);
    string s;
    int i,l;
    bool x;

    while(cin>>s)
    {
        l=s.length();

        for(i=0;i<l;i++)
        {
            if(s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V')
            {
                if((i-1)>=0 && (s[i-1]=='B' || s[i-1]=='F' || s[i-1]=='P' || s[i-1]=='V'))
                {
                    continue;
                }
                else
                {
                    cout<<1;
                }
            }
            else if(s[i]=='C' || s[i]=='G' || s[i]=='J' || s[i]=='K' || s[i]=='Q' || s[i]=='S' || s[i]=='X' || s[i]=='Z')
            {
                if((i-1)>=0 && (s[i-1]=='C' || s[i-1]=='G' || s[i-1]=='J' || s[i-1]=='K' || s[i-1]=='Q' || s[i-1]=='S' || s[i-1]=='X' || s[i-1]=='Z'))
                {
                    continue;
                }
                else
                {
                    cout<<2;
                }
            }
            else if(s[i]=='D' || s[i]=='T')
            {
                if((i-1)>=0 && (s[i-1]=='D' || s[i-1]=='T'))
                {
                    continue;
                }
                else
                {
                    cout<<3;
                }
            }
            else if(s[i]=='L')
            {
                if((i-1)>=0 && s[i-1]=='L')
                {
                    continue;
                }
                else
                {
                    cout<<4;
                }
            }
            else if(s[i]=='M' || s[i]=='N')
            {
                if((i-1)>=0 && (s[i-1]=='M' || s[i-1]=='N'))
                {
                   continue;
                }
                else
                {
                    cout<<5;
                }
            }
            else if(s[i]=='R')
            {
                if((i-1)>=0 && s[i-1]=='R')
                {
                    continue;
                }
                else
                {
                    cout<<6;
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
