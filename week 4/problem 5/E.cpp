#include <iostream>
#include<string>
using namespace std;


int main()
{
	string word;
	int n;
	int r = 0, b = 0, g = 0;
	cin >> n;
	cin >> word;
	for (int i = 1; i < n; i++) {
		if (word[i - 1] == word[i]) {
			if (word[i] == 'R')
				r++;
			else if (word[i] == 'G')
				g++;
			else if (word[i] == 'B')
				b++;
		}

	}

	cout << b + r + g;

}
