#include <iostream>
using namespace std;

int main()
{
	bool is_prime[2001000]={0};
	is_prime[0] = 0;
	is_prime[1] = 0;
	is_prime[2] = 1;
	int i,n,a,b;
	int max_a = 0;
	int max_b = 0;
	int max_count = 0;
	for (i = 3; i<2001000; i+= 2)
	{
		is_prime[i] = 1;
		for (int j = 3; j*j<=i; ++j)
		{
			if (is_prime[j])
				if (i%j==0) is_prime[i] = 0;
		}
	}

	for (a=-999; a<1000; ++a)
	{
		for (b = 3; b<1000; ++b)
		{
			if (!is_prime[b] || b<max_count) continue;
			if (b <= -1600 -40*a) continue;
			n = 0;
			while (is_prime[n*n+a*n+b]) ++n;
			if (n > max_count)
			{
				max_count = n;
				max_a = a;
				max_b = b;
			}
		}
	}
	cout << max_a*max_b << endl;

	return 0;
}
