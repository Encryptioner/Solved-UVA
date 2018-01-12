#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("10082. WERTYU.txt","r",stdin);

    char s;
    int l,i,j;
    char ch[52]={'`','1','2','3','4','5','6','7','8','9','0','-','=', 'Q','W','E','R','T','Y','U','I','O','P','[',']',92, 'A','S','D','F','G','H','J','K','L',';',39,'~','!', 'Z','X','C','V','B','N','M',',','.','/','@','#','$'};

    while(scanf("%c",&s)==1)
    {
        if(s==32)
        {
            printf(" ");
        }
        else if(s=='\n')
        {
            printf("\n");
        }
        else
        {
            for(j=0;j<52;j++)
            {
                if(s==ch[j])
                {
                    printf("%c",ch[j-1]);
                }
            }
        }
    }
    return 0;
}

