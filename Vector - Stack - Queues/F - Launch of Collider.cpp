#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
#define maher ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	maher;
	int noPar;
	string path;
	vector<int>pos;
	int firstMoment = 0;
	int flage = 0;
	cin >> noPar >> path;
	for (int i = 0; i < noPar; i++) {
		int x;
		cin >> x;
		pos.push_back(x);
	}
	for (int i = 0; i < noPar-1; i++) {
		if ((path[i] == 'R') && (path[i + 1] == 'L')) {
			int moment = (pos[i + 1] - pos[i]) / 2;
			flage = 1;
			if (firstMoment == 0 || moment < firstMoment) 
				firstMoment = moment;
			
		}
	}

	if (flage) {
		cout << firstMoment << endl;
	}
	else {
		cout << "-1" << endl;
	}
	return 0; 
}
