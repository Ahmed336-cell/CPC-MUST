#include <iostream>
using namespace std;

int main()
{
	int n;
	bool check = false;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			bool valid = true;
			int x = i;
			while (x > 0) {
				if (x % 10 != 4 && x % 10 != 7)
					valid = false;
				x /= 10;
			}

			if (valid)
			{
				check = true;
			}

		}
	

	}


	if (check) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
}
