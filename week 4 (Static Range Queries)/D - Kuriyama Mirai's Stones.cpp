#include <iostream>
#include <vector>
#include <algorithm>
# define ll long long
#define MA ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    MA;
    int n;
    cin >> n;
    vector <ll> v1(n + 1), pUnorderd(n + 1), v2(n + 1), pOrderd(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v1[i];
        
    }
    //copy  unorderd vector in new vector to sort it
    v2 = v1;
    sort(v2.begin(), v2.end());
    for (int i = 1; i <= n; i++)
    {
        // calculate unorderd vector
        pUnorderd[i] = v1[i] + pUnorderd[i - 1];
        //calculate orderd vector
        pOrderd[i] = v2[i] + pOrderd[i - 1];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int c, l, r;
        cin >> c >> l >> r;
        if (c == 1)
        {
            cout << pUnorderd[r] - pUnorderd[l - 1] << '\n';
        }
        else
        {
            cout << pOrderd[r] - pOrderd[l - 1] << '\n';
        }
    }
}
