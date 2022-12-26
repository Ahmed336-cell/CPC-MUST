#include <iostream>
#include<string>
using namespace std;


int main()
{
	string word;
	int t;
	cin >> t;
	while (t--) {
		cin >> word;
		for (int i = 0; i < word.length(); i += 2) {
			cout << word[i];
		}
		cout << word[word.length()-1]<<endl;
	}

}
