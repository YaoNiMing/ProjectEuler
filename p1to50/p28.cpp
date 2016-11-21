#include <iostream>
using namespace std;
int main()
{
	int sum = 1;
	int cur = 1;
	for (int d = 2; d<=1000; d+=2) 
	{
		sum += 4*cur+10*d;	
		cur += 4*d;
	}
	cout << sum << endl;
	return 0;
}
