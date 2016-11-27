#include <iostream>
#include <cmath>
using namespace std;

bool is_pentagonal(int n)
{
	int c = (int)round((1+sqrt(24*n+1))/6);
	return c*(3*c-1)/2 == n;
}

int main()
{
	bool not_found = 1;
	int i = 1;
	int m,n,j;
	while (not_found)
	{
		++i;
		n = i*(3*i-1)/2;
		for (j = i-1; j>0; --j)
		{
			m = j*(3*j-1)/2;
			if (is_pentagonal(n-m) && is_pentagonal(n+m))
			{
				cout << n-m << endl;
				not_found = 0;
				break;
			}
		}
	}
	return 0;
}
