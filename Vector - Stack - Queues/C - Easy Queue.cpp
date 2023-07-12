#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    queue<int>q;
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        if(c==1){
            int n;
            cin>>n;
            q.push(n);
        }else if(c==2){
            if (!q.empty()){
                q.pop();
            }
 
        }else{
            if (q.empty()){
                cout<<"Empty!"<<"\n";
            }else{
                cout<<q.front()<<"\n";
            }
 
        }
 
 
    }
 
    return 0;
}
 
