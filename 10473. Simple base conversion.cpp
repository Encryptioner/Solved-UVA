#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("10473. Simple base conversion.txt","r",stdin);
    string s;
    long long int i,j,l,n,x;
    char base16[1000];

    while(getline(cin,s))
    {
        l=s.length();
        if(s[0]=='0' && s[1]=='x')
        {
            j=l-3;
            n=0;
            for(i=2;i<l;i++)
            {
                if(s[i]=='A')
                {
                    x=10;
                }
                else if(s[i]=='B')
                {
                    x=11;
                }
                else if(s[i]=='C')
                {
                    x=12;
                }
                else if(s[i]=='D')
                {
                    x=13;
                }
                else if(s[i]=='E')
                {
                    x=14;
                }
                else if(s[i]=='F')
                {
                    x=15;
                }
                else
                {
                    x=s[i]-'0';
                }
                n+=x*pow(16,j);
                j--;
            }
            printf("%lld\n",n);
        }
        else
        {
            n=0;
            for(i=0;i<l;i++)
            {
                n=n*10+s[i]-'0';
            }
            if(n<=0)
            {
                if(n<0)
                {
                    break;
                }
                printf("0x0\n");
            }
            else
            {
                i=0;
                while(n>0)
                {
                    x=n%16;
                    if(x>9)
                    {
                        if(x==10)
                        {
                            base16[i]='A';
                        }
                        else if(x==11)
                        {
                            base16[i]='B';
                        }
                        else if(x==12)
                        {
                            base16[i]='C';
                        }
                        else if(x==13)
                        {
                            base16[i]='D';
                        }
                        else if(x==14)
                        {
                            base16[i]='E';
                        }
                        else
                        {
                            base16[i]='F';
                        }
                    }
                    else
                    {
                        base16[i]=x+48;
                    }
                    n=n/16;
                    i++;
                }
                printf("0x");
                for(j=i-1;j>=0;j--)
                {
                    printf("%c",base16[j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
