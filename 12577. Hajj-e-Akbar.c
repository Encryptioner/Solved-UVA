#include<stdio.h>//Accepted
#include<string.h>

int main()
{
    int i=1;
    char ch[100];

    while(scanf("%s",ch)==1)
    {
        if(strcmp(ch,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
            i++;

        }
        else if(strcmp(ch,"Umrah")==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
            i++;
        }
        else if(strcmp(ch,"*")==0)
        {
            break;
        }
    }
    return 0;
}
