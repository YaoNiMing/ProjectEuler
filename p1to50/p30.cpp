#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int total = 0;
	int dig_sum,n;
	const int max = 6*pow(9,5);
	for (int i=10;i<max;++i)
	{
		dig_sum = 0;
		n = i;
		while (n!=0)
		{
			dig_sum += pow((n%10),5);
			n /= 10;
		}
		if (dig_sum == i) {total+= i;
		cout << i << endl;}
	}
	cout << total << endl;
	return 0;
}
