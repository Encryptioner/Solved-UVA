#include<bits/stdc++.h>//Accepted
#define MAX 250
using namespace std;

vector<int>G[MAX];

int bfs(int n,int src1,int src2)
{
	bool reached=false;
	int level[MAX]={0},visited[MAX]={0},parent[MAX]={0};
	queue<int>Q;

	Q.push(src1);
	visited[src1]=1;
    level[src1]=0;

	while(!Q.empty())
	{
		int u=Q.front();
		Q.pop();
		for(int i=0;i<G[u].size();i++)
		{
			int v=G[u][i];
			if(!visited[v])
			{
				level[v]=level[u]+1;
				parent[v]=u;
				visited[v]=1;
				Q.push(v);
			}
			else if(v==src2)
            {
                reached=true;
                break;
            }
		}
		if(reached)
        {
            break;
        }
	}
	printf("%d\n",level[src2]);
    return 0;
}

int main()
{
    freopen("429. Word Transformation.txt","r",stdin);
    vector<string>dictionary[12];
    string data,start,ending,x,y,z;
    int data_length,test_case,vector_size,start_length,i,j,k,count,node,src1,src2,c=1;
    map<string,int>mymap;

    cin>>test_case;
    while(test_case--)
    {
        if(c>1){printf("\n");}

        char input[100];
        //all word of same data length is stored in dictionary input
        while(cin>>data && data!="*")
        {
            data_length=data.length();
            dictionary[data_length].push_back(data);
        }
        getchar();
        while(gets(input)&&strlen(input))//input is string containing src and destination
        {
            char *temp;
            temp=strtok(input," ");//strtok is used to split the string in two words
            start=temp;
            temp=strtok(NULL," ");
            ending=temp;

            //finding that list containing length of src
            start_length=start.length();
            vector_size=dictionary[start_length].size();
            node=vector_size-1;//no of word of that particular length except src

            for(i=0;i<vector_size;i++)
            {
                //mapping every word of same length and finding src and dest
                z=dictionary[start_length][i];
                mymap[z]=i;
                if(z==start){src1=i;}
                if(z==ending){src2=i;}
            }

            for(i=node;i>=0;i--)
            {
                x=dictionary[start_length][i];//word

                for(j=0;j<vector_size-1;j++)
                {
                    y=dictionary[start_length][j];//word which can be used to transform
                    count=0;
                    bool okay=true;
                    for(k=0;k<start.length();k++)
                    {
                        if(x[k]!=y[k])//comparision of character of both word
                        {
                            count++;
                            if(count>1)//checking if there are only one character difference or not
                            {
                                okay=false;
                                break;
                            }
                        }
                    }
                    if(okay)//if only one character difference create graph
                    {
                        G[i].push_back(j);
                        G[j].push_back(i);
                    }
                }
                vector_size--;//don't know
            }
            cout<<start<<" "<<ending<<" ";
            bfs(node,src1,src2);//find shortest path
            mymap.clear();
            for(i=0;i<node;i++)
            {
                G[i].clear();
            }
            c++;
        }
    }
    return 0;
}

/*
first I sort out data of specific length of dictionary while inputting in vector
then mapped them and find out there connections and next applied bfs
when input ends by a new line
getchar();
        while(gets(input)&&strlen(input))
        {
            char *temp;
            temp=strtok(input," ");
            start=temp;
            temp=strtok(NULL," ");
            ending=temp;
            cout<<start<<" "<<ending<<endl;
        }
*/
