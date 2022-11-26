#include <iostream>
using namespace std;
int main()
{
	int a, b,r=0;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		r = a % 10;
		if (r == 0) {
			a /= 10;
		}
		else {
			a -= 1;
		}
	}

	cout << a;

}

