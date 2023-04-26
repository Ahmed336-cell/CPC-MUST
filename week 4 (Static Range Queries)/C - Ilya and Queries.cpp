#include <iostream>
#include <vector>
#define MA ios_base::sync_with_stdio(false) , ios::sync_with_stdio(false) , cin.tie(0), cout.tie(0);
using namespace std;
int main()
{
	/*
	 to solve problem of complexity when we calcualte 
	something we will store it and when we need it we willgo back to get it
	sample 
		.	.	.	.	.	.
	--------------------------
		0	1	2	3	4	5      q(3 ,4) -> 3 - 2 =1 - > number 3 has 2 , number 4 has 3 
	--------------------------

		#	.	.	#	#	#	
	   -----------------------
	   0	0	1	1	2	3   q(1,3) -> 1 -0 = 1 -> number 1 has 0 , number 3 has 1
	   -----------------------
	*/
	MA;
	string s;
	int m , counter=0;
	cin >> s >> m;
	vector<int>v(s.size()+1);
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1])
			counter++;
		v[i] = counter;
	}

	int l, r;
	while (m--) {
		cin >> l >> r;
		cout << v[r - 1] - v[l - 1] << "\n";
	}

}
