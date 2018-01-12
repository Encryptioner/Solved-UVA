#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("10082. WERTYU.txt","r",stdin);

    string s;
    int l,i,j,k;
    char ch[52]={'`','1','2','3','4','5','6','7','8','9','0','-','=', 'Q','W','E','R','T','Y','U','I','O','P','[',']',92, 'A','S','D','F','G','H','J','K','L',';',39,'~','!', 'Z','X','C','V','B','N','M',',','.','/','@','#','$'};

    while(getline(cin,s))
    {
        l=s.length();

        for(i=0;i<l;i++)
        {
            if(s[i]==32)
            {
                printf(" ");
            }
            else
            {
                for(j=0;j<52;j++)
                {
                    if(s[i]==ch[j])
                    {
                        printf("%c",ch[j-1]);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
