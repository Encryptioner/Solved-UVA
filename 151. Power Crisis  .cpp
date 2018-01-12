#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,c,x=13;
    //freopen("151. Power Crisis  .txt","r",stdin);
    while(cin>>n && n!=0)
    {
        for(i=1;;i++)
        {
            //vector<int>region(n);
            vector<int>region;
            for(j=1;j<=n;j++)
            //for(j=0;j<n;j++)
            {
                region.push_back(j);
                //region[j]=j+1;
            }
            cout<<n<<endl;
            for(j=0;j<n;j++)
            {
                cout<<"a now = "<<region[j]<<endl;
            }
            c=0;
            while(region[c]!=13)
            {
                //cout<<region[c]<<endl;
                region.erase(region.begin()+c);
                /*for(j=0;j<region.size();j++)
                {
                    cout<<region[j]<<" ";
                }
                printf("\n");*/
                //cout<<region[c]<<" ";
                //cout<<"c = "<<c<<endl;
                c+=i-1;
                //cout<<region[c]<<" ";
                //cout<<region.size()<<" ";
                if(c>=region.size())
                {
                    c=c%region.size();
                }
                //cout<<"c = "<<c<<endl;
            }
            //cout<<541541541584<<endl;
            if(region[0]==13 && region.size()==1)
            {
                printf("%d for %d\n",x,i);
                break;
            }
            //break;
        }
        x++;
    }
    return 0;
}
/*for(i=1;i<=n;i++)
        {
            cout<<"a now = "<<region[i]<<endl;
        }*/
/*
int ans[87] = { 1, 18, 10, 11, 7, 17, 11, 15, 29, 5, 21, 13, 26, 14, 11, 23,
			22, 9, 73, 17, 42, 7, 98, 15, 61, 22, 84, 24, 30, 9, 38, 15, 54, 27,
			9, 61, 38, 22, 19, 178, 38, 53, 79, 68, 166, 20, 9, 22, 7, 21, 72,
			133, 41, 10, 82, 92, 64, 129, 86, 73, 67, 19, 66, 115, 52, 24, 22,
			176, 10, 57, 137, 239, 41, 70, 60, 116, 81, 79, 55, 102, 49, 5, 22,
			54, 52, 113, 15 };//smaller is 5

	while (scanf("%d", &k), k) {
		printf("%d\n",ans[k-13]);
*/
