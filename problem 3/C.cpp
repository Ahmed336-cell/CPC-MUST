#include <iostream>
using namespace std;
/*
n -> number of rooms
p -> number of people
q -> number of people can enter the room
so we determine if room can (q) dependes on number of people (p)
*/
int main()
{
	int n , p ,	q , sum =0;
	cin >> n;
	for (int i = 0; i <n; i++) {
		cin >>p >>q ;
		if (q-p>=2)
		{
			sum++;
		}
		
		
	}

	cout << sum << endl;
}
