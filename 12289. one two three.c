#include<stdio.h>
#include<string.h>

int main()
{
    char ch[7];
    int n,i,count;
    while(scanf("%d",&n)==1);
    {

        for(i=n;i>0;i--)
        //while(n--)
        {

            //gets(ch);
            scanf("%s",&ch);
            if(strlen(ch)==5)
            {
                int count1=0;
                if(ch[0]=='t')
                {
                    count1++;
                }
                if(ch[1]=='h')
                {
                    count1++;
                }
                if(ch[2]=='r')
                {
                    count1++;
                }
                if(ch[3]=='e')
                {
                    count1++;
                }
                if(ch[4]=='e')
                {
                    count1++;
                }
                if(count1>=4)
                {
                    printf("3\n");
                }
                //printf("3\n");
            }
            else
            {
                int count2=0;
                if(ch[0]=='t')
                {
                    count2++;
                }
                if(ch[1]=='w')
                {
                    count2++;
                }
                if(ch[2]=='o')
                {
                    count2++;
                }
                if(count2>=2)
                {
                    printf("2\n");
                }
                else
                {
                    int count3=0;
                    if(ch[0]=='o')
                    {
                        count3++;
                    }
                    if(ch[1]=='n')
                    {
                        count3++;
                    }
                    if(ch[2]=='e')
                    {
                        count3++;
                    }
                    if(count3>=2)
                    {
                        printf("1\n");
                    }
                    //printf("1\n");
                }
            }

        }
    }
    return 0;
}
