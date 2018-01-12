#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    //freopen("488. Triangle Wave .txt","r",stdin);
    string s[10];
    int i,f,a,t;

    s[1]="1";
    s[2]="1\n22\n1";
    s[3]="1\n22\n333\n22\n1";
    s[4]="1\n22\n333\n4444\n333\n22\n1";
    s[5]="1\n22\n333\n4444\n55555\n4444\n333\n22\n1";
    s[6]="1\n22\n333\n4444\n55555\n666666\n55555\n4444\n333\n22\n1";
    s[7]="1\n22\n333\n4444\n55555\n666666\n7777777\n666666\n55555\n4444\n333\n22\n1";
    s[8]="1\n22\n333\n4444\n55555\n666666\n7777777\n88888888\n7777777\n666666\n55555\n4444\n333\n22\n1";
    s[9]="1\n22\n333\n4444\n55555\n666666\n7777777\n88888888\n999999999\n88888888\n7777777\n666666\n55555\n4444\n333\n22\n1";

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        scanf("%d",&f);
        for(i=0;i<f;i++)
        {
            cout<<s[a]<<"\n";
            if(i<f-1)
            {
                printf("\n");
            }
        }
        if(t>0)
        {
            printf("\n");
        }
    }
    return 0;
}
