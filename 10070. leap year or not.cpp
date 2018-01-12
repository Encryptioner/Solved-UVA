#include <iostream>//Accepted
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    string n;

    long leap,a,b,c,d,e,i,l,x;

    int print=0;

    freopen("10070_1.txt","r",stdin);

    while(cin>>n)
    {
        if(print!=0)
        {
            cout<<"\n";
        }
        print=1;

        leap=x=a=b=c=d=e=0;

        l=n.length();

        for(i=0;i<l;i++)
        {
            a=((a*10)+(n[i]-'0'))%4;
            b=((b*10)+(n[i]-'0'))%100;
            c=((c*10)+(n[i]-'0'))%400;
            d=((d*10)+(n[i]-'0'))%15;
            e=((e*10)+(n[i]-'0'))%55;
        }

        if((a==0 && b!=0) || c==0)
        {
            cout<<"This is leap year.\n";
            leap = 1;
            x = 1;
        }
        if(d==0)
        {
            cout<<"This is huluculu festival year.\n";//This is huluculu festival year.
            x = 1;
        }
        if(leap==1 && e==0)
        {
            cout<<"This is bulukulu festival year.\n";
        }
        if(x==0)
        {
            cout<<"This is an ordinary year.\n";
        }
    }
    return 0;
}
