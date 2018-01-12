#include <iostream>//Accepted

using namespace std;

int main()
{
    unsigned long long int T,a,b,c,i=0;
    cin>>T;
    while(T--)
    {
        cin>>a;
        cin>>b;
        cin>>c;

        if((a+b)<c || (b+c)<a || (c+a)<b)
        {
            cout<<"Case "<<++i<<": Invalid"<<endl;
        }
        else
        {
            if((a==b) && (b==c))
            {
                cout<<"Case "<<++i<<": Equilateral"<<endl;
            }
            else if((a==b) || (b==c) || (c==a))
            {
                cout<<"Case "<<++i<<": Isosceles"<<endl;
            }
            else
            {
                cout<<"Case "<<++i<<": Scalene"<<endl;
            }
        }
    }
    return 0;
}
