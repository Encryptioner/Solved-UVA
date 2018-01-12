#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("483. Word Scramble  .cpp.txt","r",stdin);

    string s;
    int i,j,l,x,y;

    while(getline(cin,s))
    {
        l=s.length();
        x=y=0;
        for(i=0;i<l;i++)
        {
            if(s[i]==32 || i==l-1)
            {
                y=i;
                if(i==l-1)
                {
                    y=i+1;
                }

                for(j=y-1;j>=x;j--)
                {
                    printf("%c",s[j]);
                }

                x=y+1;
                if(s[i]==32)
                {
                    printf("%c",s[i]);
                }
             }
        }
        printf("\n");
    }
    return 0;
}

