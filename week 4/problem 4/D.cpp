#include <iostream>
#include<set>
#include<string>
using namespace std;


int main()
{
	string word;
	set<char> l;

	getline(cin, word);
	for (int i = 0; i < word.length(); i++) {
		if (word[i] >= 'a' && word[i] <= 'z') {
			l.insert(word[i]);
		}

	}

	cout << l.size();
	

}
