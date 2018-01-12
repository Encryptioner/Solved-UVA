#include<bits/stdc++.h>
using namespace std;

int main()//https://codingstrife.wordpress.com/2013/07/23/solution-uva10252-pc110303-common-permutation/
{
    freopen("10252. Common Permutation.txt","r",stdin);
    string a;
    string b;

    int l1,l2;

    while(getline(cin,a) && getline(cin,b))
    {
        l1=a.length();
        l2=b.length();

        string s="";

        for (int i=0; i <l1 ; i++)
        {
            for (int j=0; j<l2; j++)
            {
                if (a[i] == b[j])
                {
                    s+= a[i];
                    a[i] = '&';//Without this line i got WA. but I don't understand the use of this line. As i=i+1 in loop their is no use of this a[i]. ao why i have to change the character in this index?
                    b[j] = '*';
                }
            }
        }

        sort(s.begin(),s.end());
        cout << s << endl;
    }

    return 0;
}

/*#define MIN(a,b) (a>b?b:a)//http://programmingsoln.blogspot.com/2011/05/uva-10252-common-permutation.html
#define MAXN 1001
char A[MAXN], B[MAXN];
int FA[300], FB[300]; //FA=Frequency of A
int com(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}
void Cal()
{
   int i, m, j;
   qsort(A,strlen(A),sizeof(char),com);
   qsort(B,strlen(B),sizeof(char),com);
   for(i = 0; A[i]; i++){
       m = A[i];    //implicitly convert char to int
       FA[m] ++;
   }
   for(i = 0; B[i]; i++){
       m = B[i];
       FB[m] ++;
   }
   for(i = 97; i<=122; i++) {
       if(FA[i] && FB[i]) //if FA and FB both grater than 0
       {
           m = MIN(FA[i], FB[i]);
           for(j = 0; j<m; j++)
               printf("%c",i);    //convert int to char
       }
   }
   printf("\n");
}
int main() {
    freopen("10252. Common Permutation.txt","r",stdin);
    while(gets(A))
    {
        gets(B);
        for(int i = 97; i<= 125; i++)
           FA[i] = FB[i] = 0;
        Cal();
    }
    return 0;
}
/*main()//http://ruhinraihan.blogspot.com/2012/07/uva-10252-common-permutation-solution.html
{
    freopen("10252. Common Permutation.txt","r",stdin);
    char s1[1010],s2[1010];
    map<char, int>freq;
    while(gets(s1))
    {
        gets(s2);
        int l1=strlen(s1);
        sort(s1,s1+l1);
        int l2=strlen(s2);
        sort(s2,s2+l2);
        //cout<<s1<<"\n"<<s2<<endl;
        freq.clear();
        //cout<<s1<<"\n"<<s2<<endl;
        for(int i=0;i<l1;i++)
            freq[s1[i]]++;
        for(int i=0;i<l2;i++)
            if(freq[s2[i]])
            {
                cout<<s2[i];
                freq[s2[i]]--;
            }
        cout<<endl;
    }
}


/*
int main(){//https://github.com/esbanarango/Competitive-Programming/blob/master/UVa/10252%20-%20Common%20Permutation.cpp
    freopen("10252. Common Permutation.txt","r",stdin);
    string a,b;

    while(getline (cin,a)){
          getline (cin,b);
          int tamA=a.size();
          int tamB=b.size();
          sort(a.begin(), a.end());
          sort(b.begin(), b.end());
          //cout<<a<<"\n"<<b<<endl;
          if (a == b){
             cout << a << endl;
             continue;
          }
          string k="";
          for(int i=0, j=0;i<tamA && j<tamB;){
            if(a[i]==b[j]){
                     k+= a[i];
                     i++;
                     j++;
            }else{
                  while (a[i] < b[j]){
                        ++i;
                        if (i == tamA) break;
                  }
                  while (b[j] < a[i]){
                        ++j;
                        if (j == tamB) break;
                  }
            }
          }
          cout<<k<<endl;
    }

 return 0;
}
*/
