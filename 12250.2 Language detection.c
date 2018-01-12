#include<stdio.h>
#include<string.h>

int main()
{
    freopen("12250.txt","r",stdin);
    int i;
    char ch[20];
    for(i=1;;i++)
    {
    while(scanf("%s",ch)==1)
    {
        if(ch[0]=='#')
        {
            break;
        }
        if(strcmp(ch,"HELLO")==0)
        {
            printf("Case %d: ENGLISH\n",i);
        }
        else if(strcmp(ch,"HOLA")==0)
        {
            printf("Case %d: SPANISH\n",i);
        }
        else if(strcmp(ch,"HALLO")==0)
        {
            printf("Case %d: GERMAN\n",i);
        }
        else if(strcmp(ch,"BONJOUR")==0)
        {
            printf("Case %d: FRENCH\n",i);
        }
        else if(strcmp(ch,"CIAO")==0)
        {
            printf("Case %d: ITALIAN\n",i);
        }
        else if(strcmp(ch,"ZDRAVSTVUJTE")==0)
        {
            printf("Case %d: RUSSIAN\n",i);
        }

        else
        {
            printf("Case %d: UNKNOWN\n",i);
        }
    }
    }
    return 0;
}

