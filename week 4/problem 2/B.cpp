/*
A -> B
B ->A
B ->C
C- > B
b is commen if number of A + C is equal to B then can erase string

*/

#include <iostream>
#include<cstring>
using namespace std;


int main()
{
	string word;
	int t;
	
	cin >> t;

	while (t--) {
		cin >> word;
		int a = 0, b = 0, c = 0;

		for (int i = 0; i < word.length(); i++) {
			if (word[i] == 'A')
				a++;
			else if (word[i] == 'B')
				b++;
			else
				c++;
		}

		if (a + c == b) {
			cout << "YES" << endl;

		}
		else {
			cout << "NO" << endl;
		}


	}

}

