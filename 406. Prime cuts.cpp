#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    bool sieve[5000];//bool sieve[] main er vitore declare korle sieve[] er prottekta index er man 0 hoy na..
    long long int prime[500];

    long long int max=5000;
    long long int i,j,N,C,count,max1,x=0;

    freopen("406. Prime cuts.txt","r",stdin);

    max1=sqrt(max);

    for(i=3;i<max1;i+=2)
    {
        for(j=(i*i);j<max;j+=(2*i))
        {
            sieve[j]=1;
        }
    }
    prime[0]=0;
    prime[1]=1;
    prime[2]=2;
    x=2;
    for(i=3;i<max;i+=2)
    {
        if(sieve[i]==0)
        {
            prime[++x]=i;
        }
    }

    while(cin>>N && cin>>C)
    {
        for(i=1;i<500;i++)
        {
            //cout<<prime[i]<<endl;
            if(prime[i]==N)
            {
                count=i;
                cout<<"\ncount1 = "<<count<<endl<<endl;
                x=count/2;
                break;
            }
            else if(prime[i]>N)
            {
                count=i-1;
                cout<<"\ncount2 = "<<count<<endl<<endl;
                x=count/2;
                break;
            }
        }
        if(C>x)
        {
            cout<<N<<" "<<C<<":";
            for(i=1;i<=count;i++)
            {
                cout<<" "<<prime[i];
            }
            cout<<"\n\n";
        }
        else if((count%2)==0)
        {
            /*cout<<"count = "<<count<<endl;
            cout<<"x = "<<x<<endl;
            cout<<prime[x]<<endl;*/
            cout<<N<<" "<<C<<":";
            for(i=x-C+1;i<=x+C;i++)
            {
                cout<<" "<<prime[i];
            }
            cout<<"\n\n";
        }
        else if((count%2)!=0)
        {
            cout<<N<<" "<<C<<":";
            for(i=x+1-C+1;i<=x+C;i++)
            {
                cout<<" "<<prime[i];
            }
            cout<<"\n\n";
        }
    }


    return 0;
}

/* 1: 1

2 1: 1 2

3 2: 1 2 3

4 3: 1 2 3

5 2: 1 2 3 5

6 3: 1 2 3 5

7 2: 2 3 5

8 2: 2 3 5

9 2: 2 3 5

10 9: 1 2 3 5 7

11 9: 1 2 3 5 7 11

12 4: 1 2 3 5 7 11

13 4: 1 2 3 5 7 11 13

14 3: 2 3 5 7 11

15 8: 1 2 3 5 7 11 13

16 13: 1 2 3 5 7 11 13

17 10: 1 2 3 5 7 11 13 17

18 16: 1 2 3 5 7 11 13 17

19 14: 1 2 3 5 7 11 13 17 19

20 17: 1 2 3 5 7 11 13 17 19

21 20: 1 2 3 5 7 11 13 17 19

22 8: 1 2 3 5 7 11 13 17 19

23 9: 1 2 3 5 7 11 13 17 19 23

24 15: 1 2 3 5 7 11 13 17 19 23

25 2: 5 7 11 13

26 3: 3 5 7 11 13 17

27 7: 1 2 3 5 7 11 13 17 19 23

28 1: 7 11

29 14: 1 2 3 5 7 11 13 17 19 23 29

30 10: 1 2 3 5 7 11 13 17 19 23 29

31 10: 1 2 3 5 7 11 13 17 19 23 29 31

32 24: 1 2 3 5 7 11 13 17 19 23 29 31

33 32: 1 2 3 5 7 11 13 17 19 23 29 31

34 15: 1 2 3 5 7 11 13 17 19 23 29 31

35 18: 1 2 3 5 7 11 13 17 19 23 29 31

36 4: 3 5 7 11 13 17 19 23

37 11: 1 2 3 5 7 11 13 17 19 23 29 31 37

38 34: 1 2 3 5 7 11 13 17 19 23 29 31 37

39 18: 1 2 3 5 7 11 13 17 19 23 29 31 37

40 27: 1 2 3 5 7 11 13 17 19 23 29 31 37

41 35: 1 2 3 5 7 11 13 17 19 23 29 31 37 41

42 33: 1 2 3 5 7 11 13 17 19 23 29 31 37 41

43 32: 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43

44 10: 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43

45 12: 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43

46 43: 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43

47 40: 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

48 21: 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

49 22: 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

50 15: 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

*/

