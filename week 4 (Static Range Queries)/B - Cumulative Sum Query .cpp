// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#define MA ios_base::sync_with_stdio(false) , ios::sync_with_stdio(false) , cin.tie(0), cout.tie(0);
using namespace std;
int main()
{
	MA;
	int n;
	vector<int>v;
	cin >> n;
	v.push_back(0);

	for (int i = 0; i < n; i++) {
		int m; 
		cin >> m;
		// 0 1 5 6 -> O(1)
		v.push_back(v[v.size() - 1] + m);

	}
	int c;
	cin >> c;
	for (int i = 0; i < c; i++) {
		int x, y;
		cin >> x >> y;
		//1 2 -> v[3] - v[1]
		/*
		element = 0 1 5 6 
		index   =   0 1 2 3  - > v[3] - v[1] = 6 - 1 = 5
		*/
		cout << v[y+ 1] - v[x] << "\n";
	}




}
