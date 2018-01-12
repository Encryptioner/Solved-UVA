#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;

int main ()
{
    long f, b, c, d, e,g, I, l, leap;
    char A[1000000];
    int print = 0;
    //freopen("10070.1.txt","r",stdin);
    while (cin >> A){


        if ( print != 0 )
            printf("\n");
        print = 1;

        leap = f = b = c = d = e =g = 0;

        l = strlen(A);

        for (I=0; I< l; I++) {

            cout<<"A[I]= "<<1+A[I]<<endl;
            cout<<"A[I] - '0' = "<<1+A[I]-'0'<<endl;
            b = ((b * 10) + (A[I]-'0')) % 4;
            cout<<"b "<<I<<" = "<<b<<endl;
            c = ((c * 10) + (A[I]-'0')) % 100;
            cout<<"c "<<I<<" = "<<c<<endl;
            d = ((d * 10) + (A[I]-'0')) % 400;
            cout<<"d "<<I<<" = "<<d<<endl;
            e = ((e * 10) + (A[I]-'0')) % 15;
            cout<<"e "<<I<<" = "<<e<<endl;
            g = ((g * 10) + (A[I]-'0')) % 55;
            cout<<"g "<<I<<" = "<<g<<endl;
        }
        if ((b==0 && c!=0) || d==0){
            printf("This is leap year.\n");
            leap = 1;
            f = 1;
        }

        if (e==0){
            printf("This is huluculu festival year.\n");
            f = 1;
        }

        if (leap==1 &&g==0)
            printf("This is bulukulu festival year.\n");

        if (f==0)
            printf("This is an ordinary year.\n");

    }
    return 0;
}
