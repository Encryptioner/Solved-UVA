
#include <stdio.h>//Accepted
#include <math.h>

int main()
{
    double a,r;

    double pi=2*acos(0.0);

    while(scanf("%lf",&r)==1)
    {
        a=(sin(108*pi/180)/sin(63*pi/180))*r;
        printf("%.10f\n",a);
    }
    return 0;
}
