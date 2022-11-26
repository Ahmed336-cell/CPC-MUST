#include <iostream>
using namespace std;
int main()
{
	long long n,  x, dist=0;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		int num;
		char c;
		cin >> c >> num;
		if (c == '+') {
			x += num;
		}
		else  {
			if (num <= x) {
				x -= num;

			}
			else {
				dist++;
			}
		}
	}
	cout << x << " " << dist;
}
