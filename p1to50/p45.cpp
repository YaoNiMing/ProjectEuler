#include <iostream>
#include <cmath>
using namespace std;

bool is_pentagonal(long int n)
{
	long int c = (long int)round((1+sqrt(24*n+1))/6);
	return c*(3*c-1)/2 == n;
}
bool is_hexagonal(long int n)
{
	long int c = (long int)round((1+sqrt(8*n+1))/4);
	return c*(2*c-1) == n;
}

int main()
{
	long int i = 285;
	long int n;
	bool unfound = 1;
	while (unfound)
	{
		++i;
		n = i*(i+1)/2;
		if (is_pentagonal(n) && is_hexagonal(n)) 
		{
			unfound = 0;
			cout << n << endl;
		}
	}
	return 0;
}
