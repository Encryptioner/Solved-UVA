#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

int N;

bool check(int m) {
    vector<int> list;
    for(int i = 1; i <= N; i++)
        list.push_back(i);

    int c = 0;
    while(list[c] != 13) {
        cout<<list[c]<<endl;
        list.erase(list.begin() + c);
        cout<<list[c]<<endl;
        cout<<list.size()<<endl;
        c += m - 1;
        if(c >= list.size()) c = c % list.size(); cout<<"c = "<<c<<endl;
    }
    cout<<541541541584<<endl;
    return list.size() == 1;
}

int main() {
    for(;;) {
        scanf("%d", &N);
        if(N == 0) break;
        int m = 5;
        while(!check(m)) m++;
        printf("%d\n", m);
    }
}
