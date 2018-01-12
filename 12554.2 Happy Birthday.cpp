#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("12554. Happy Birthday.txt","r",stdin);
    int n,i,l,j,x;
    cin>>n;
    string s[16],p[101];
    for(i=1;i<=n;i++)
    {
        cin>>p[i];
    }

    s[1]="Happy"; s[2]="birthday"; s[3]="to"; s[4]="you";
    s[5]="Happy"; s[6]="birthday"; s[7]="to"; s[8]="you";
    s[9]="Happy"; s[10]="birthday"; s[11]="to"; s[12]="Rujia";
    s[13]="Happy"; s[14]="birthday"; s[15]="to"; s[16]="you";

    if(n%16==0)
    {
        x=n/16;
    }
    else
    {
        x=(n/16)+1;
    }

    for(l=1,i=1,j=1;l<=x*16;l++)
    {
        cout<<p[i]<<": "<<s[j]<<"\n";
        if(j==16)
        {
            j=0;
        }
        if(i==n)
        {
            i=0;
        }
        i++;
        j++;
    }
    return 0;
}
