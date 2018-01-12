#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("440. Eeny Meeny Moo.txt","r",stdin);

    int n,i,j,c;
    while(cin>>n && n!=0)
    {
        if(n<=2)
        {
            printf("1\n");
        }
        else
        {
        for(i=1;;i++)
        {
            vector<int>region(n);

            for(j=0;j<n;j++)
            {
                region[j]=j+1;
            }
            c=0;
            while(region[c]!=2)
            {
                region.erase(region.begin()+c);
                c+=i-1;

                if(c>=region.size())
                {
                    c=c%region.size();
                }
            }

            if(region[0]==2 && region.size()==1)
            {
                printf("%d\n",i);
                break;
            }
        }
        }
    }
    return 0;
}


