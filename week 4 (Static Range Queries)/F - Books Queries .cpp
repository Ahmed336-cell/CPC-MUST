#include <iostream>
#include <vector>
#include <algorithm>
# define ll long long
#define N 2e5+5
#define MA ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    MA;
    char s;
    int q, id, l = 0, r = 0;
    cin >> q;
    vector<ll>v(N,0);
    for(int i = 0 ; i < q ; i++){
        cin >> s >> id;
        if (i == 0)
            v[id] = 0;
        else {
            if (s == 'L')
                v[id] = --l;
            else if (s == 'R')
                v[id] = ++r;
            else
                cout << min(abs(l - v[id]), abs(r - v[id]))<<"\n";
        }

    }

}
