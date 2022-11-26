#include <iostream>
using namespace std;

// a -> limak
// b-> Bob


int main()
{
	int a, b, n = 0;
	cin >> a >> b;
	while (a <= b) {
		a *= 3;
		b *= 2;
		n++;
	}
	cout << n<<endl;

}
