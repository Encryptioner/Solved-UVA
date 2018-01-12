#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    unsigned int i,n;
    string s;
    //char n[10];
    bool x;
    int l;
    freopen("673. Parentheses Balance.txt","r",stdin);
    cin>>n;
    getchar();//get enter after the input of n

    //while(n-- !="0")
    while(n--)
    {
        stack<char>array;
        x=true;
        getline(cin,s);
        l=s.length();

        for(i=0;i<l;i++)
        {

            if(s[0]=='\n')
            {
                break;
            }
            /*if(l%2==1)
            {
                x=false;
                break;
            }*/
            if(s[i]==' ')
            {
                continue;
            }
            if(s[i]=='(' || s[i]=='[')
            {
                array.push(s[i]);
            }
            else if(s[i]==')' && !array.empty() && array.top()=='(')
            {
                array.pop();
            }
            else if(s[i]==']' && !array.empty() && array.top()=='[')
            {
                array.pop();
            }
            else
            {
                x=false;
                break;
            }
        }
        if(x==true && array.empty())
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
