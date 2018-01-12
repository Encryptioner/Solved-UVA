#include <iostream>
#include <cstdio>
#include <cmath>
#define pi 2*acos(0.0)
//p==acos(-1)
using namespace std;

int main()
{
    unsigned int T;
    double length,width,radius,red,green;

    cin>>T;

    while(T--)
    {
        cin>>length;
        width=radius=0;

        width=(length*6)/10;
        radius=length/5;

        red=pi*radius*radius;
        green=(length*width)-red;

        printf("%.2f %.2f\n",red,green);
    }
    return 0;
}
