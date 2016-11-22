#include <iostream>
using namespace std;

int num_digit(int n)
{
	int i=1;
	while (n>0)
	{
		i *= 10;
		n /= 10;
	}
	return i;
}

bool circular(int n, bool *p)
{
	int i = n;
	int tmp;
	do
	{
		if (!p[i]) return 0;
		tmp = i/10;
		i = (i%10)*num_digit(tmp) + tmp;
	}
	while (i!=n);
	return 1;
}

int main()
{
	bool is_prime[1000000]={0};
	is_prime[0] = 0;
	is_prime[1] = 0;
	is_prime[2] = 1;
	int i;
	int count=0;
	for (i = 3; i<1000000; i+= 2)
	{
		is_prime[i] = 1;
		for (int j = 3; j*j<=i; ++j)
		{
			if (is_prime[j])
				if (i%j==0) is_prime[i] = 0;
		}
	}

	for (i=1; i<1000000; ++i)
		if (circular(i,is_prime)) count++;

	cout << count << endl; 

	return 0;
}
