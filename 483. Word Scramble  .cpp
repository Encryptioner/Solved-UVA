#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("483. Word Scramble  .cpp.txt","r",stdin);
    string s;
    int i,j,l,x,y;

    while(getline(cin,s))
    {
        l=s.length();
        //cout<<l<<endl;
        x=y=0;
        for(i=0;i<l;i++)
        {
            //cout<<i<<endl;
            //if(s[i]==32 || s[i]=='\n')
            if(s[i]==32 || i==l-1)
            {
                y=i;
                if(i==l-1)
                {
                    y=i+1;
                }
                //printf("%c ",s[j]);
                //cout<<x<<" "<<y<<" "<<i<<endl;

                for(j=y-1;j>=x;j--)
                {
                    //printf("%x ",s[j]);
                    printf("%c",s[j]);
                }
                x=y+1;
                if(s[i]==32)
                {
                    printf("%c",s[i]);
                }

                //printf("\n");
                //cout<<x<<" "<<y<<" "<<i<<endl;
             }
        }
        printf("\n");
    }

    return 0;
}
