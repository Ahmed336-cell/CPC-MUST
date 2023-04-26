#include <iostream>
#include <vector>
#include <algorithm>
# define ll long long
#define N 2e5+5
#define MA ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
  /*
  n -> size of array
  m -> no of queries
  k -> no of operations
  when say 1 2 so we will use operation no 1 and 2 , 1 3 -> 1 2 3
  */
	MA;
	int n, m, k;
	cin >> n >> m >> k;
	vector<int>ar(n + 1);
	for (int i = 1; i <=n; i++) {
		cin >> ar[i];
	}
	vector<ll> l(m + 1), r(m + 1), d(m + 1);
	for (int i = 1; i <= m; i++) {
		cin >> l[i] >> r[i] >> d[i];
	}

	vector <ll>partial(m + 3);
	for (int i = 1; i <= k; i++) {
		int x, y;
		cin >> x >> y;
		partial[x]++;
		partial[y + 1]--;
	}
	
	for (int i = 1; i <= m; i++) {
		partial[i] += partial[i - 1];
	}

	vector<ll>add(n + 3);
	for (int i = 1; i <= m; i++) {
		d[i] *= partial[i];
		add[l[i]] += d[i];
		add[r[i] + 1] -= d[i];
	}

	for (int i = 1; i <= n; i++) {
		add[i] += add[i - 1];
	}
	for (int i = 1; i <= n; i++) {
		cout << ar[i] + add[i] << " ";
	}




}
