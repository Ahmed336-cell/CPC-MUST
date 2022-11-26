
#include <iostream>
using namespace std;

int main()
{
	long long n, p, v, t;
	int total = 0, counter = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p >> v >> t;
		total = p + v + t;
		if (total >= 2) {
			counter++;
		}
	}

	cout << counter;
}

