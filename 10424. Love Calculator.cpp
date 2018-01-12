#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("10424. Love Calculator.txt","r",stdin);
    string s1;
    string s2;

    int i,l1,l2,sum1,sum2,n1,n11,n2,n22;
    double love,name1,name2;

    while(getline(cin,s1) &&  getline(cin,s2))
    {

        sum1=sum2=0;
        l1=s1.length();
        l2=s2.length();

        for(i=0;i<l1;i++)
        {
            if(s1[i]>='A' && s1[i]<='Z')
            {
                sum1+=s1[i]-64;
            }
            else if(s1[i]>='a' && s1[i]<='z')
            {
                sum1+=s1[i]-96;
            }
        }
        for(i=0;i<l2;i++)
        {
            if(s2[i]>='A' && s2[i]<='Z')
            {
                sum2+=s2[i]-64;
            }
            else if(s2[i]>='a' && s2[i]<='z')
            {
                sum2+=s2[i]-96;
            }
        }
        if(sum1==0 && sum2==0)
        {
            cout<<"\n";
            continue;
        }
        n1=sum1;
        sum1=0;
        while(n1>0)
        {
            n11=n1;
            n1=n1/10;
            sum1+=n11-(n1*10);
            if(n1==0 && sum1>=10)
            {
                n1=sum1;
                sum1=0;
            }
        }
        n2=sum2;
        sum2=0;
        while(n2>0)
        {
            n22=n2;
            n2=n2/10;
            sum2+=n22-(n2*10);
            if(n2==0 && sum2>=10)
            {
                n2=sum2;
                sum2=0;
            }
        }

        name1=(double)sum1;
        name2=(double)sum2;
        if(name1>=name2)
        {
            love=(name2/name1)*100;
        }
        else
        {
            love=(name1/name2)*100;
        }

        printf("%.2lf",love);
        cout<<" %"<<endl;
    }
    return 0;
}


        /*while(1)
        {
            if(s1[0]==0)
            {
                getline(cin,s1);
            }
            else
            {
                break;
            }
        }
        getline(cin,s2);
        while(1)
        {
            if(s2[0]==0)
            {
                getline(cin,s2);
            }
            else
            {
                break;
            }
        }
        */
