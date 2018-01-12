#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("10252. Common Permutation.txt","r",stdin);

    string a,b;
    int l1,l2,i,j;

    while(getline(cin,a) && getline(cin,b))
    {
        l1=a.length();
        string s="";

        for(i=0;i<l1;i++)
        {
            j=b.find(a[i]);

            if(j>=0 && j<=l1)
            {
                s+=a[i];
                b[j]='*';
                a[i]='&';
            }

        }
        sort(s.begin(),s.end());

        cout<<s<<endl;
    }

    return 0;
}

/*l2=a.length();

        for(i=1;i<l2;i++)
        {
            for(j=l2-1;j>=i;j--)
            {
                if(a[j-1]>a[j])
                {
                    swap(a[j-1],a[j]);
                }
            }
        }*/
/*a="pretty";
    b="woment";
    ch1[0]='8';
    //cout<<b.find(a[2])<<endl;
    for(i=0;i<5;i++)
    {
    x2=b.find(a[i]);
    cout<<x2<<endl;
    if(x2>=0 && x2<=5)
    {
        //cout<<554541<<endl;
        ch1[x1]=a[i];
        a+=a[i];
        b[x2]=42;
        cout<<a<<endl;
        x1++;
    }
    }
    cout<<ch1[0]<<endl;
    cout<<a<<endl;*/

    //while(getline(cin,a) && getline(cin,b))
    //cout<<a<<"\n"<<b<<endl;
    //cout<<l1<<endl;
