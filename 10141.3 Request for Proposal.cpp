#include <stdio.h>//Accepted

int main()
{
    int i,j,x=1,n,p;
    char req[100];

    freopen("10141. Request for Proposal.txt","r",stdin);

    while(scanf("%d",&n)==1 && scanf("%d",&p)==1 && n!=0 && p!=0)
    {
        char pro[p][100];
        float d[p];
        int r[p];
        int max=0,best=0;

        for(i=0;i<n;i++)
        {
            scanf(" %[^\n]s",&req);
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

/*
#include<cstdio>
#include<iostream>

using namespace std;

int n, p, r;
float d, best_compliance, best_cost;
string line, name, best_name;


int main() {
    freopen("10141. Request for Proposal.txt","r",stdin);
    for(int T = 1;; T++) {


        scanf("%d %d\n", &n, &p);
        if(n == 0 && p == 0) break;
        if(T > 1) cout << endl;
        for(int i = 0; i < n; i++)
            getline(cin, line);
        best_compliance = 0.0;
        best_cost = 1E37;
        for(int i = 0; i < p; i++) {
            getline(cin, name);
            scanf("%f %d\n", &d, &r);
            for(int i = 0; i < r; i++)
                getline(cin, line);
            if((float) r / p > best_compliance \
                    || (float) r / p == best_compliance && d < best_cost) {
                best_compliance = (float) r / p;
                best_cost = d;
                best_name = name;
            }
        }
        cout << "RFP #" << T << endl;
        cout << best_name << endl;
    }
}
*/
