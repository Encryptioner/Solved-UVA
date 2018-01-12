#include<stdio.h>//Accepted
#include<math.h>
#define pi 2*acos(0.0)//p==acos(-1)
int main()
{
    int T;
    double n,h,r,circle,rectangle;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lf",&n);
        r=0;
        r=n/5;
        h=(n*6)/10;
        circle=pi*r*r;
        rectangle=(n*h)-circle;
        printf("%.2lf %.2lf\n",circle,rectangle);
    }

    return 0;
}

