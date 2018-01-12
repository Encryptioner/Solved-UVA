#include <stdio.h>

int main()
{
    int i,j,x=1,n,p;
    char req[100];
    freopen("10141. Request for Proposal.txt","r",stdin);

    ////while(scanf("%d %d",&n,&p)==1 && n!=0 && p!=0)//does not work
    while(scanf("%d",&n)==1 && scanf("%d",&p)==1 && n!=0 && p!=0)
    {
        char pro[p][100];
        float d[p];
        int r[p];
        int max=0,best=0;

        for(i=0;i<n;i++)
        {
            scanf(" %[^\n]s",&req);//or getchar(); scanf("%[^\n]s",&pro[i]);
        }
        for(i=0;i<p;i++)
        {
            getchar();
            scanf("%[^\n]s",&pro[i]);
            scanf("%f",&d[i]);
            scanf("%d",&r[i]);

            for(j=0;j<r[i];j++)
            {
                scanf(" %[^\n]s",&req);
            }
        }

        for(i=0;i<p;i++)
        {
        if(r[i]>=max)
        {
            if(r[i]>max)
            {
                max=r[i];
                best=i;
            }
            else
            {
                if(d[i]<d[best])
                {
                    max=r[i];
                    best=i;
                }
            }
        }
        }
        if(x>1)
        {
            printf("\n");
        }
        printf("RFP #%d\n",x);
        printf("%s\n",pro[best]);
        x++;
    }

    return 0;
}
