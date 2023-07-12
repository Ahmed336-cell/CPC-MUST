#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
int main()
{
	vector<int>pe, ma, pr;
	int t;
	cin >> t;
	for (int i = 1; i <=t; i++) {
		int x;
		cin >> x;
		if (x == 1)
			pr.push_back(i);
		else if (x == 2)
			ma.push_back(i);
		else
			pe.push_back(i);
	}

	int ans = min(ma.size(), min(pr.size(), pe.size()));
	cout << ans << endl;
	for (int i = 0; i < ans; i++) {
		cout << ma[i] << " " << pr[i] << " " << pe[i] << endl;
	}
	
	return 0; 
}
