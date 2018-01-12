#include<bits/stdc++.h>//https://github.com/shahidul2k9/problem-solution/blob/master/uva%20online%20judge/10922%20-%202%20the%209s.cpp

using namespace std;

inline bool ismul(int n )
{
return n % 9 == 0;
}

int main()
{
freopen("10922. 2 the 9s.txt","r",stdin);

char seq[1001];
int degree, ans, sum, len;

while(true)
{
len = strlen(gets(seq));

if(len == 1 && seq[0] == '0')
    break;

ans = degree = 0;
for(int i = 0; i < len; i++ )
ans += seq[i] - '0';
sum = ans;

while(ismul(ans))
{
degree += 1;
if(ans == 9)
break;
sum = 0;

while(ans)
{
sum += ans%10;
ans /= 10;
}
ans = sum;
}

if(degree)
printf("%s is a multiple of 9 and has 9-degree %d.\n", seq, degree);
else
printf("%s is not a multiple of 9.\n", seq);
}
return 0;
}
