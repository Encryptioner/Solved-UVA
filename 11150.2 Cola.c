#include <stdio.h>//submitted

int main()
{
    int n,i,x;
    int array[220];

    array[1]=1;
    array[2]=3;
    array[3]=4;
    x=4;
    for(i=4;i<=220;i++)
    {
        if(i%2==0)
        {
            x=x+2;
            array[i]=x;
        }
        else
        {
            x=x+1;
            array[i]=x;
        }
    }

    while(scanf("%d",&n)==1)
    {
        printf("%d\n",array[n]);
    }
    return 0;
}
/*
for(i=1;i<220;i++)
    {
        printf("%d %d\n",i,array[i]);
    }
*/
/*FILE *fp;
    fp=fopen("1 to n.txt","w");
    for(k=1;k<=200;k++)
    {
        fprintf(fp,"%d ",k);
    }
    fclose(fp);//jotokhon porjonto fclose() deoa hobe na. output.txt e lekha ashbe na*/
