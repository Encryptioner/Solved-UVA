#include<bits/stdc++.h>//Accepted

using namespace std;

long long int power(long long int x1,long long int j)
{
    long long int y=x1;
    if(j==0)
    {
        x1=1;
    }
    while(j>1)
    {
        x1=x1*y;
        j--;
    }
    return x1;
}

int main()
{
    freopen("389. Basically Speaking.txt","r",stdin);
    string s;
    long long int x,x1,x2,n,i,j,l;
    long long int base[500];
    char base16[500];
    bool legal;

    while(cin>>s)
    {
        cin>>x1>>x2;
        legal=true;
        l=s.length();
        if(x1<=10 && x2<=10)
        {
            n=0;
            for(i=0;i<l;i++)
            {
                n=n*x1+s[i]-'0';
                if(s[i]-'0'>=x1)
                {
                    legal=false;
                    break;
                }
            }
            if(legal==false)
            {
                printf("  ERROR\n");
                continue;
            }
            if(n<=0)
            {
                printf("      0\n");
            }
            else
            {
                i=0;
                while(n>0)
                {
                    base[i]=n%x2;
                    n=n/x2;
                    i++;
                }
                if(i>7)
                {
                    printf("  ERROR\n");
                }
                else
                {
                    for(j=6;j>(i-1);j--)
                    {
                        printf(" ");
                    }
                    for(j=i-1;j>=0;j--)
                    {
                        printf("%lld",base[j]);
                    }
                    printf("\n");
                }
            }
        }
        else
        {
            j=l-1;
            n=0;
            for(i=0;i<l;i++)
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
                if(x>=x1)
                {
                    legal=false;
                    break;
                }
                n+=x*power(x1,j);
                j--;
            }
            if(legal==false)
            {
                printf("  ERROR\n");
                continue;
            }
            if(n<=0)
            {
                printf("      0\n");
            }
            else
            {
                i=0;
                while(n>0)
                {
                    x=n%x2;
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
                    n=n/x2;
                    i++;
                }
                if(i>7)
                {
                    printf("  ERROR\n");
                }
                else
                {
                    for(j=6;j>(i-1);j--)
                    {
                        printf(" ");
                    }
                    for(j=i-1;j>=0;j--)
                    {
                        printf("%c",base16[j]);
                    }
                    printf("\n");
                }
            }
        }
    }

    return 0;
}
