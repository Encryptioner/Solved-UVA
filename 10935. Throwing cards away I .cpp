#include<bits/stdc++.h>//Accepted

using namespace std;

int main()
{
    freopen("10935. Throwing cards away I .txt","r",stdin);
    int F=0,R=0;
    int N,i;
    //vector<unsigned int>Q(N);
    int Q[100];

    while(cin>>N && N!=0)
    {
        F=1;
        R=N;
        for(i=F;i<=R;i++)
        {
            Q[i]=i;
        }
        printf("Discarded cards:");
        while(F!=R)
        {
            printf(" %d",Q[F]);
            R=R+1;
            Q[R]=Q[F+1];
            F=F+2;
            if(F!=R)
            {
                printf(",");
            }
        }
        printf("\nRemaining card: %d\n",Q[R]);
    }
    return 0;
}
