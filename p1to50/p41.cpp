#include <iostream>
#include <set>
using namespace std;

int num_digit(int n)
{
	int i=0;
	while (n>0)
	{
		i += 1;
		n /= 10;
	}
	return i;
}

bool pandigital(int n)
{
	set<int> digits;
	int nd = num_digit(n);
	int d;
	while (n>0)
	{
		d = n%10;
		if (d>nd) return 0;
		digits.insert(d);
		n/=10;
	}
	return (digits.size()==nd);
}

int main()
{
	bool is_prime[8000000]={0};
	is_prime[0] = 0;
	is_prime[1] = 0;
	is_prime[2] = 1;
	int i;
	int count=0;
	for (i = 3; i<8000000; i+= 2)
	{
		is_prime[i] = 1;
		for (int j = 3; j*j<=i; ++j)
		{
			if (is_prime[j])
				if (i%j==0) is_prime[i] = 0;
		}
	}
	cout << "here"<<endl;
	for (i=7999999; i>1; --i)
		if(is_prime[i])
			if (pandigital(i))
			{
				cout << i << endl;
				break;
			}
	return 0;
}
