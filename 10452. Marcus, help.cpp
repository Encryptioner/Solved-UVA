#include<bits/stdc++.h>//Accepted
#define MAX 1001
#define pii pair<int,int>
#define For(i,n) for(i=0;i<n;i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0);
    //freopen("10452. Marcus, help.txt","r",stdin);

    int t,m,n,i,j,k,sx,sy,dx,dy;

    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        string input[m],str;

        For(i,m)//only # and IEHOVA will be present in 2d grid after this loop
        {
            cin>>input[i];
            For(j,n)
            {
                if(input[i][j]=='@')
                {
                    sx=i,sy=j;
                    input[i][j]='-';//taking src position
                }
                else if(input[i][j]=='#')
                {
                    dx=i,dy=j;
                }
                else if(input[i][j]=='I' || input[i][j]=='E' || input[i][j]=='H' || input[i][j]=='O' || input[i][j]=='V' || input[i][j]=='A')
                {
                    continue;
                }
                else
                {
                    input[i][j]='-';//else are '-'
                }
            }
        }

        int fy[]={1,-1,0};//movement pointer
        int fx[]={0,0,-1};
        //printf("\n");
        bool found=false;
        for(i=m-1;i>=0;i--){//@is in m and # is in 0 row of input[][]
        For(k,3)
        {
            int tx=sx+fx[k];
			int ty=sy+fy[k];
			if(fx[k]==0 && fy[k]==1){str="right";}
			if(fx[k]==0 && fy[k]==-1){str="left";}
			if(fx[k]==-1 && fy[k]==0){str="forth";}

			if(tx>=0 and tx<m and ty>=0 and ty<n)
            {
                if(input[tx][ty]=='#')
                {
                    cout<<str<<endl;//always use endl not \n with c++ string
                    found=true;
                    break;
                }
                if(input[tx][ty]!='-')//then IEHOVA
                {
                    cout<<str<<" ";
                    sx=tx,sy=ty;
                    input[tx][ty]='-';//as pointer can't come to previous position
                    k=-1;//to check all direction for new position
                }
            }
        }
        if(found){break;}
        }
        //printf("\n");
    }
    return 0;
}
