#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
int main()
{
	vector<int>p, n, z;
	int t, x;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x;
		if (x > 0)
			p.push_back(x);
		else if (x < 0)
			n.push_back(x);
		else
			z.push_back(x);

	}

	if (n.size() % 2 == 0) {
		int l = n.back();
		n.pop_back();
		z.push_back(l);
	}
	if (p.empty()) {
		int last = n.back();
		n.pop_back();
		int lastS = n.back();
		n.pop_back();
		p.push_back(last);
		p.push_back(lastS);
	}

	cout << n.size() << " ";
	for (auto i : n) {
		cout << i << " ";
	}
	cout << "\n";

	cout << p.size() << " ";
	for (auto i : p) {
		cout << i << " ";
	}
	cout << "\n";

	cout << z.size() << " ";
	for (auto i : z) {
		cout << i << " ";
	}
	cout << "\n";
	
	return 0; 
}
