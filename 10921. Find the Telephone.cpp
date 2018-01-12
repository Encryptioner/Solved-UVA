#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("10921. Find the Telephone.txt","r",stdin);

    string s;
    int i,l;

    while(getline(cin,s))
    {
        l=s.length();
        for(i=0;i<l;i++)
        {
            if(s[i]=='A' || s[i]=='B' || s[i]=='C')
            {
                printf("2");
                continue;
            }
            else if(s[i]=='D' || s[i]=='E' || s[i]=='F')
            {
                printf("3");
                continue;
            }
            else if(s[i]=='G' || s[i]=='H' || s[i]=='I')
            {
                printf("4");
                continue;
            }
            else if(s[i]=='J' || s[i]=='K' || s[i]=='L')
            {
                printf("5");
                continue;
            }
            else if(s[i]=='M' || s[i]=='N' || s[i]=='O')
            {
                printf("6");
                continue;
            }
            else if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S')
            {
                printf("7");
                continue;
            }
            else if(s[i]=='V' || s[i]=='T' || s[i]=='U')
            {
                printf("8");
                continue;
            }
            else if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z')
            {
                printf("9");
                continue;
            }
            else
            {
                printf("%c",s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
