//#include<stdio.h>//shipu's blog wrong
//#include<stdio.h>//tusher's blog wrong
#include<stdio.h>//http://programmingsoln.blogspot.com/2011/06/uva-10018-reverse-and-add.html//wrong
unsigned long reverse(register unsigned long);
int main()
{
    unsigned long n,num,rev,i;
    freopen("10018. Reverse and Add.txt","r",stdin);
    scanf("%lu",&n);
    while(n--)
    {
        scanf("%lu",&num);
        for(i=0;;i++)
        {
            rev=reverse(num);
            if(!(num^rev))
                break;
            num=num+rev;
        }
        printf("%lu %lu\n",i,num);
    }
    return 0;
}
unsigned long reverse(register unsigned long num)
{
    unsigned long r=0;
    while(num)
    {
        r=r*10+num%10;
        num=num/10;
    }
    return r;
}
