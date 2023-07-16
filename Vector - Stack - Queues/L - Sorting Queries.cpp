#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
using namespace std;
#define ll long long
#define maher ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	maher;
    int tc;
    cin >> tc;
    int n, ele;
    queue<int> q;
    priority_queue<int> pq;
    while (tc--) {
        cin >> n;
        if (n == 1) {
            cin >> ele;
            q.push(ele);
        }
        else if (n == 2) {
            if (pq.empty()) {
                cout << q.front() << endl;
                q.pop();
            }
            else {
                cout << pq.top() * -1 << endl;
                pq.pop();
            }
        }
        else if (n == 3) {
            while (!q.empty()) {
                pq.push(q.front() * -1);
                q.pop();
            }

        }

    }


	return 0;
}
