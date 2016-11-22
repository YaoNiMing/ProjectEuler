#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int total = 0;
	int dig_sum,n;
	int facs[10];
	facs[0] = 1;
	for (int i=1; i<10; ++i) facs[i] = facs[i-1]*i;
	const int max = 7*facs[9];
	for (int i=10;i<max;++i)
	{
		dig_sum = 0;
		n = i;
		while (n!=0)
		{
			dig_sum += facs[n%10];
			n /= 10;
		}
		if (dig_sum == i) {total+= i;
		cout << i << endl;}
	}
	cout << total << endl;
	return 0;
}
