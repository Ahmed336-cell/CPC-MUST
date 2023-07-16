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
	int n, x;
	cin >> n;
	vector<string> log;
	priority_queue<int, vector<int>, greater<>> bh;
	for (int i = 0; i < n; i++) {
		string o;
		cin >> o;
		switch (o[5]) {
		case 't':
			cin >> x;
			o.append(" " + to_string(x));
			bh.push(x);
			break;
		case 'n':
			cin >> x;
			o.append(" " + to_string(x));
			if (bh.empty()) {
				log.push_back("insert " + to_string(x));
				bh.push(x);
				break;
			}
			if (x > bh.top()) {
				while (!bh.empty() && bh.top() < x) {
					bh.pop();
					log.push_back("removeMin");
				}
			}
			if (bh.empty() || x < bh.top()) {
				log.push_back("insert " + to_string(x));
				bh.push(x);
			}
			break;
		case 'e':
			if (bh.empty()) {
				log.push_back("insert 0");
			}
			else {
				bh.pop();
			}
		}
		log.push_back(o);

	}

	cout << log.size() << endl;
	for (auto s : log) {
		cout << s << '\n';
	}


	return 0;
}
