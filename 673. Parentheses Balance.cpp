#include<iostream>//wrong Answer
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    int i,j,n,l,k;
    string ch,s;
    /*getline(cin,s);
    cout<<s;*/
    freopen("673. Parentheses Balance.txt","r",stdin);
    cin>>n;

    while(n--)
    {
            cin>>ch;
            l=ch.length();

            bool x=true;
            int t=0,p=0,a=0,b=0,c=0,d=0;

            for(i=0;i<l;i++)
            {
                if((l%2)!=0 || l==0)
                {
                    x=false;
                    break;
                }
                if(ch[i]=='(' || ch[i]=='[')
                {
                    if(ch[i]=='(')
                    {
                        t++;
                        a=i;
                    }
                    if(ch[i]=='[')
                    {
                        p++;
                        c=i;
                    }
                }
                else if(ch[i]==')' || ch[i]==']')
                {
                    if(ch[i]==')')
                    {
                        t--;
                        if(t<0)
                        {
                            x=false;
                            break;
                        }
                        b=i;
                    }
                    if(ch[i]==']')
                    {
                        p--;
                        if(p<0)
                        {
                            x=false;
                            break;
                        }
                        d=i;
                    }
                }
                /*if(c>a)
                {
                    if(((c+1)-(a+0))%2!=0)
                    {
                        x=false;
                        break;
                    }
                    for(k=a+1;k<c;k++)
                    {

                    }
                }*/
            }

            if(x==false || t!=0 || p!=0)
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
    }
    return 0;
}

/*output:
Yes
No
Yes
No
No
No
No
*/
