#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("10300. Ecological Premium.txt","r",stdin);
    int n,i,l,w[20],j;
    //cin>>n;
    string s,p[100],h[20];

    /*for(i=1;i<=n;i++)
    {
        cin>>p[i];
    }*/

    s="Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you ";
    l=s.length();
    cout<<s<<endl;
    w[0]=-2;
    for(i=0,j=1;i<l;i++)
    {
        if(s[i]==' ')
        {
            w[j]=i-1;

            cout<<j<<" "<<w[j]<<endl;
            j++;
        }
        l;
    }
    //cout<<12585<<endl;
    for(i=1;i<=j;i++)
    {
        string v="Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you ";
        h[i]=v.substr((w[i-1]+2),w[i]+1);
        cout<<w[i]+1<<endl;
        cout<<h[i]<<endl;
    }
    return 0;
}
