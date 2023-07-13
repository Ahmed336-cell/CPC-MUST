#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    deque<int>dq;
    int n;
    cin >> n;

    int checker = 0;
    while (n--) {
        string s;
        cin >> s;
        if(s == "back"){
            if(dq.empty()) cout << "No job for Ada?\n";
            else{
                if(checker % 2 == 0){
                    cout << dq.back() << "\n";

                    dq.pop_back();
                }else{
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
            }
        }else if(s == "front"){
            if(dq.empty()) cout << "No job for Ada?\n";
            else{
                if(checker % 2 == 0){
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }else{
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
            }
        }else if(s == "reverse"){
            checker++;
        }else if(s == "push_back"){
            int x; cin >> x;
            if(checker % 2 == 0){
                dq.push_back(x);
            }else{
                dq.push_front(x);
            }
        }else{
            int x; cin >> x;
            if(checker % 2 == 0){
                dq.push_front(x);
            }else{
                dq.push_back(x);
            }
        }
    }
    return 0;
}
