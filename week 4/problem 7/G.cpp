#include <iostream>
#include<string>
#include<algorithm>
 
using namespace std;
 
int main()
{
	string s1;
	int n;
	int flage=0;
	cin >> n;
	cin >> s1;
	for (int k = 0; k < n; k++) {
		s1[k] = tolower(s1[k]);
	}
 
	sort(s1.begin(), s1.end());
	
	for (int i = 0; i < n; i++) {
		if (s1[i] != s1[i + 1]) {
			flage++;
		}
		
	}
 
	if (flage==26) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
