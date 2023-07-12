#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    stack <int> st;
    int t , c ;
    cin>>t;
    while(t--){
        cin>>c;
        if(c==1){
            //push
            int n;
            cin>>n;
            st.push(n);
        }else if( c==2){
            //pop
            if (!st.empty()){
                st.pop();
            }
        }else{
            //print top
            if (st.empty()){
                cout<<"Empty!"<<"\n";
            }else{
                cout<<st.top()<<"\n";
 
            }
        }
 
    }
 
    return 0;
}
