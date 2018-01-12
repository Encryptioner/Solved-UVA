#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("11192. Group Reverse.txt","r",stdin);
    string s;
    int n,l,le,x,y,i,j;

    while(cin>>n && n!=0)
    {
        getline(cin,s);
        l=s.length();
        le=l/n;
        if(n==1)
        {
            le=le-1;
        }
        x=1;
        y=n;

        for(j=0;j<n;j++)
        {
            for(i=x*le;i>=l-(y*le);i--)
            {
                cout<<s[i];
            }
            y--;
            x++;
        }

        printf("\n");
    }

    return 0;
}
