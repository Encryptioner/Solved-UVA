#include<bits/stdc++.h>//wrong Answerbecuse I didn't question correctly. after row number there are mines number too. then the column numbers of mines in that row
#define MAX 1001
#define pii pair<int,int>
using namespace std;

int row,col;

void gridbfs(int sx,int sy,int dx,int dy,vector<vector<int>>&cell)
{
	vector<vector<int>>d(MAX,vector<int>(MAX)), vis(MAX,vector<int>(MAX));
	int fx[]={1,-1,0,0};
    int fy[]={0,0,1,-1};

	vis[sx][sy]=1;
	queue<pii>q;
	q.push(pii(sx,sy));

	while(!q.empty())
	{
		pii top=q.front();
		q.pop();
		for(int k=0;k<4;k++)
		{
			int tx=top.first+fx[k];
			int ty=top.second+fy[k];
			if(tx>=0 and tx<row and ty>=0 and ty<col and cell[tx][ty]!=-1 and vis[tx][ty]==0)
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
	cout<<d[dx][dy]<<endl;
}

int main()
{
    freopen("10653.  Bombs no they are mines.txt","r",stdin);
    int i,j,k,n,r,c,l,sx,sy,dx,dy;
    while(cin>>row && cin>>col && row!=0 && col!=0)
    {
        vector<vector<int>>cell(MAX,vector<int>(MAX));
        cin>>n;
        for(i=0;i<n;i++)
        {
            k=0;
            char s,a[MAX]={'\0'};
            while(scanf("%c",&s)==1)
            {
                l=strlen(a);
                if(s=='\n')
                {
                    if(l==0){continue;}
                    else {break;}
                }
                a[k]=s;
                k++;
            }
            a[k]='\0';
            bool x=false;
            l=strlen(a);
            for(j=0;j<l;j++)
            {
                if(a[j]!=' ')
                {
                    if(x==false)
                    {
                        r=a[j]-'0';
                        x=true;
                    }
                    else
                    {
                        c=a[j]-'0';
                        cell[r][c]=-1;
                    }
                }
            }
        }
        cin>>sx>>sy;
        cin>>dx>>dy;
        gridbfs(sx,sy,dx,dy,cell);
    }
    return 0;
}
/*
#include<bits/stdc++.h>
#define MAX 1001
#define pii pair<int,int>
using namespace std;

int row,col;

int gridbfs(int sx,int sy,int dx,int dy,vector<vector<int>>&cell)
{
	vector<vector<int>>d(MAX,vector<int>(MAX)), vis(MAX,vector<int>(MAX));
	int fx[]={1,-1,0,0};
    int fy[]={0,0,1,-1};

	vis[sx][sy]=1;
	queue<pii>q;
	q.push(pii(sx,sy));

	while(!q.empty())
	{
		pii top=q.front();
		q.pop();
		for(int k=0;k<4;k++)
		{
			int tx=top.first+fx[k];
			int ty=top.second+fy[k];
			if(tx>=0 and tx<row and ty>=0 and ty<col and cell[tx][ty]!=-1 and vis[tx][ty]==0)
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
	cout<<d[dx][dy]<<endl;
	return 0;
}

int str_to_int(string s,int length)
{
    int value=0;
    for(int i=0;i<length;i++)
    {
        value=value*10+s[i]-'0';
    }
    return value;
}

int main()
{
    freopen("10653.  Bombs no they are mines.txt","r",stdin);
    int i,j,k,n,r,c,l,sx,sy,dx,dy,l1,l2;
    string R,C;

    while(cin>>row && cin>>col && row!=0 && col!=0)
    {
        vector<vector<int>>cell(MAX,vector<int>(MAX));
        char *token,input[MAX]={'\0'};
        cin>>n;

        i=n;
        getchar();
        while(gets(input)&& strlen(input) && i--)
        {
            token=strtok(input," ");
            R=token;
            l1=R.length();
            r=str_to_int(R,l1);
            while(token!=NULL)
            {
                token=strtok(NULL," ");
                if(token!=NULL)
                {
                    C=token;
                    l2=C.length();
                    c=str_to_int(C,l2);
                    cell[r][c]=-1;
                }
            }
        }
        cin>>sx>>sy;
        cin>>dx>>dy;
        gridbfs(sx,sy,dx,dy,cell);
    }
    return 0;
}



*/
