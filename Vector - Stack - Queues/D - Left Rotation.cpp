#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    deque<int>dq;

    int n ,d;
    cin>>n>>d;
    for(int i = 0 ; i< n ; i++){
        int x;
        cin>>x;
        dq.push_back(x);
    }

    for(int  i = 0 ; i< d ; i++){
            int y = dq.front();
            dq.pop_front();
            dq.push_back(y);

    }

    for(int i = 0 ; i <n ; i++){
        cout<<dq[i] << " ";
    }

    return 0;
}
