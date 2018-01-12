#include<stdio.h>
int main()
{
    freopen("406. Prime cuts.txt","r",stdin);
int i,n,c,num,a[1000],d,j;
while(scanf("%d%d",&n,&c)==2)
{
d=0;
a[0]=1;
num=1;
while(num<=n)
    {
    i=2;
    while(i<=num)
        { if(num%i==0)
        break;
        i++; }
    if(i==num)
    {
    d++;
    a[d]=num;
    }
    num++;
    }
if((c*2)>(d+1))
    {
    printf("%d %d:",n,c);
    for(j=0;j<=d;j++)
        printf(" %d",a[j]);
    }

else
    {
    printf("%d %d:",n,c);
    for(j=d/2+1-c;j<=d/2+c-1;j++)
        printf(" %d",a[j]);
    if(d%2==1)
    printf(" %d",a[d/2+c]);
    }
printf("\n\n");
}
}

/*
#define MAX 1010

using namespace std;

int PrimeArray[MAX];
int counter;
int numbers[MAX];

void sieve (){
int i, j;

for(j = 4 ; j < MAX ; j+=2)
{
numbers[j] = 1;
}
PrimeArray[0] = 1;
PrimeArray[1] = 2;

counter=2;

for(i = 3 ; i <= MAX ; i++)
{
if(numbers[i] == 0)
{
PrimeArray[counter++] = i;
for(j = i*i ; j < MAX && j > 0; j+= i*2)
{
numbers[j] = 1;
}
}
}
}
*/
