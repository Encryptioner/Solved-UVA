#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    double x;
    //cin>>x;
    //printf("%.0f\n",x);

    long double p,k,n;
    //int n;

    while(cin>>n && cin>>p)
    {

        k=pow(10,(log10(p)/n));
        //k=pow(p,(1/n));
        cout<<k<<endl;

        //printf("%.0llf\n",k);
        //printf("%.0lf\n",pow(10,(log10(p)/n)));

    }
    return 0;
}

