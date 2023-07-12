#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    bool flage = true;
    int n;
    cin>>n;
    while(n--){
        string  s;
        cin>>s;
        stack<int>st;
        for(int i = 0 ; i < s.length() ; i++){
            if (s[i] == '(' || s[i] == '{' || s[i] =='['){
                st.push(s[i]);
            }else{
                if (s[i] == ')'){
                    if (st.empty() || st.top()!='('){
                        flage = false;
                        break;
                    }else{
                        st.pop();
                    }

                }else if (s[i] == '}'){
                    if (st.empty() || st.top() != '{'){
                        flage = false;
                        break;
                    }else{
                        st.pop();
                    }
                }else if (s[i] == ']'){
                    if (st.empty() || st.top() != '['){
                        flage = false;
                        break;
                    }else{
                        st.pop();
                    }
                }


            }
        }
        if (st.empty() && flage){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
        flage = true;
    }
    return 0;
}
