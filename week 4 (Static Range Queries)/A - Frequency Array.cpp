#include <iostream>
#include <set>
#define MA ios_base::sync_with_stdio(false) , ios::sync_with_stdio(false) , cin.tie(0), cout.tie(0);
using namespace std;
int main()
{
	MA;
	int num;
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		set<int> co;
		for (int i = 0; i < n; i++) {
			cin >> num;
			co.insert(num);
		}

		string output = co.size() == n ? "prekrasnyy\n" : "ne krasivo\n";
		cout << output;

	}



}
