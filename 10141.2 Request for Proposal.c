#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,x=1,n,p,r,max;
    float d,min;
    char req[100],pro[100],best[100];
    freopen("10141. Request for Proposal.txt","r",stdin);

    while(scanf("%d",&n)==1 && scanf("%d",&p)==1 && n!=0 && p!=0)
    {
        max=0,min=100000000;

        for(i=0;i<n;i++)
        {
            scanf(" %[^\n]s",&req);
        }
        for(i=0;i<p;i++)
        {
            getchar();
            scanf("%[^\n]s",&pro);
            scanf("%f",&d);
            scanf("%d",&r);

            for(j=0;j<r;j++)
            {
                scanf(" %[^\n]s",&req);
            }

            if(r>=max)
            {
                if(r>max )
                {
                    max=r;
                    min=d;
                    strcpy(best,pro);
                }
            else
            {
                if(d<min)
                {
                    max=r;
                    min=d;
                    strcpy(best,pro);
                }
            }
        }
        }

        if(x>1)
        {
            printf("\n\n");
        }
        printf("RFP #%d\n",x);
        printf("%s",best);
        x++;
    }

    return 0;
}
