#include<bits/stdc++.h>//Accepted
#define MAX 1001
#define pii pair<int,int>

using namespace std;

int row,col;
string a,b;

void gridbfs(int sx,int sy,int dx,int dy)
{
	vector<vector<int> >cell(10,vector<int>(10)), d(10,vector<int>(10)), vis(10,vector<int>(10));
	int tx,ty;
	int fx[]={2,2,-2,-2,1,-1,1,-1};
    int fy[]={1,-1,1,-1,2,2,-2,-2};

	vis[sx][sy]=1;
	queue<pii>q;
	q.push(pii(sx,sy));

	while(!q.empty())
	{
		pii top=q.front();
		q.pop();
		for(int k=0;k<8;k++)
		{
			tx=top.first+fx[k];
			ty=top.second+fy[k];
			if(tx>=0 and tx<row and ty>=0 and ty<col and vis[tx][ty]==0)
			{
				vis[tx][ty]=1;
				d[tx][ty]=d[top.first][top.second]+1;
				q.push(pii(tx,ty));
			}
		}
		if(vis[dx][dy]==1)
        {
            break;
        }
	}
	cout<<"To get from "<<a<<" to "<<b<<" takes "<<d[dx][dy]<<" knight moves.\n";
}

int main()
{
    freopen("439. Knight Moves.txt","r",stdin);
    row=8;
    col=8;
    char gcol[]={'a','b','c','d','e','f','g','h'};
    int sx,sy,dx,dy,i,j;
    while(cin>>a)//a=src
    {
    cin>>b;//b=dest
    for(i=0;i<8;i++)
    {
        if(a[0]==gcol[i])//check 1st char
        {
            sx=i;
        }
        if(b[0]==gcol[i])
        {
            dx=i;
        }
    }
    sy=a[1]-'0'-1;
    dy=b[1]-'0'-1;
    gridbfs(sx,sy,dx,dy);
    }
    return 0;
}
