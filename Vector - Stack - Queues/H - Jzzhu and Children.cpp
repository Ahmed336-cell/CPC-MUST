#include<iostream>
#include <cmath>
#include<algorithm>
using namespace std;
#define ll long long
#define maher ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	maher;
	int n, m ,last=0;
	double max = 0;
	cin >> n >> m;
	for (int i = 1; i <=n; i++) {
		double t;
		cin >> t;
		if (ceil(t / m) >= max) {
			last = i;
			max = ceil (t / m);
		}
	}
	cout << last << endl;
	
	return 0; 
}
