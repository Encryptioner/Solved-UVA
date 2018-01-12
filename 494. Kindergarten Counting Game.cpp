#include<iostream>//Accepted
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    freopen("494. Kindergarten Counting Game.txt","r",stdin);
    int i,l,letter_count,word_count;
    string s;
    while(getline(cin,s))
    {
        letter_count=0;
        word_count=0;
        l=s.length();
        for(i=0;i<l;i++)
        {
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
            {
                if((s[i+1]>=65 && s[i+1]<=90) || (s[i+1]>=97 && s[i+1]<=122))
                {
                    letter_count++;
                }
                else
                {
                    word_count++;
                }
            }
        }
        cout<<word_count<<endl;
    }
    return 0;
}
