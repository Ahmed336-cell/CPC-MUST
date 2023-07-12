#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
int main()
{
	int n,pre=0,current,stair=0;
	vector<int>steps;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> current;
		if (pre >= current) {
			stair++;
			steps.push_back(pre);
		}
		if (i == n - 1) {
			steps.push_back(current);
		}

		pre = current;

	}

	cout << stair + 1 << endl;
	for (int i = 0; i < steps.size(); i++) {
		cout << steps[i] << " ";
	}

	
	return 0; 
}
