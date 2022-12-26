
#include <iostream>
#include<string>
using namespace std;


int main()
{
	int t;
	string a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		int c1 = 0, c2 = 0;
		for (int i = 0; i < a.length(); i++) {
			if (a[i] == 'X')
				c1++;
		}
		for (int i = 0; i < b.length(); i++) {
			if (b[i] == 'X')
				c2++;
		}

		if (a[a.length() - 1] == 'S' && b[b.length() - 1] == 'M') {
			cout << "<" << endl;
		}
		else if (a[a.length() - 1] == 'S' && b[b.length() - 1] == 'L') {
			cout << "<" << endl;
		}
		else if (a[a.length() - 1] == 'M' && b[b.length() - 1] == 'L') {
			cout << "<" << endl;
		}
		else if (a[a.length() - 1] == 'L' && b[b.length() - 1] == 'S') {
			cout << ">" << endl;
		}
		else if (a[a.length() - 1] == 'L' && b[b.length() - 1] == 'M') {
			cout << ">" << endl;
		}
		else if (a[a.length() - 1] == 'M' && b[b.length() - 1] == 'S') {
			cout << ">" << endl;
		}
		else {
			if (a[a.length() - 1] == 'S' && b[b.length() - 1] == 'S') {
				if (c1 > c2) {
					cout << "<" << endl;
				}
				else if (c1 < c2) {
					cout << ">" << endl;

				}
				else {
					cout << "=" << endl;
				}
			}
			else if (a[a.length() - 1] == b[b.length()-1]) {
				if (c1 > c2) {
					cout << ">" << endl;

				}
				else if (c1 < c2) {
					cout << "<" << endl;

				}
				else {
					cout << "=" << endl;
				}
			}
		}

	}
}

