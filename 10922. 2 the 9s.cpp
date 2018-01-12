#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("10922. 2 the 9s.txt","r",stdin);
    string s;
    int sum,l,i,ans,degree;

    while(cin>>s && s!="0")
    {
        l=s.length();
        sum=0;
        degree=0;
        for(i=0;i<l;i++)
        {
            sum+=s[i]-'0';
        }
        ans=sum;
        while((ans%9)==0)
        {
            degree++;
            if(ans==9)
            {
                break;
            }
            sum=0;
            while(ans)
            {
                sum += ans%10;
                ans /= 10;
            }
            ans=sum;
        }
        if(degree)
        {
            cout<<s<<" is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;
        }
        else
        {
            cout<<s<<" is not a multiple of 9.\n";
        }
    }

    return 0;
}


/*else {
       while(sum>=10){
        deg++;
        j=sum;
        sum=0;
        while(j>=10){
         sum=sum+(j%10);
         j=j/10;

        }
       sum=sum+j;

       }
       */
/*
degree=1;
        if(sum%9!=0)
        {
            cout<<s<<" is not a multiple of 9.\n";
        }
        else if(sum==9)
        {
            cout<<s<<" is a multiple of 9 and has 9-degree "<<degree<<endl;
        }
        else
        {
            g=10;
            while(g>9)
            {
                g=0;
                while(sum>0)
                {
                    g+=sum%10;
                    sum=sum/10;
                }
                sum=g;
                if(sum%9==0)
                {
                    degree++;
                }
                else
                {
                    break;
                }
            }
            cout<<s<<" is a multiple of 9 and has 9-degree "<<degree<<endl;
        }
        */
