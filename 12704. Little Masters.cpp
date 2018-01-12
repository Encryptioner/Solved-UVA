#include <iostream>//Accepted
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    long long unsigned int T,x,y,r;
    float m,n;

    cin>>T;

    while(T--)
    {
        cin>>x;
        cin>>y;
        cin>>r;

        m=r-sqrt(x*x+y*y);
        n=r+sqrt(x*x+y*y);

        printf("%.2f %.2f\n",m,n);
    }
    return 0;
}
