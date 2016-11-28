#include <iostream>
using namespace std;

int num_prime(int n, bool *pl)
{
	int i=2;
	int r=0;
	int p=1;
	while(n>1)
	{
		if (!pl[i]) {++i; continue;} 
		while (n%i==0)
		{
			n/=i;
			if (p!=i) {r++; p=i;}
		}
		i++;
	}
	return r;
}

int main()
{
	bool is_prime[1000000]={0};
	is_prime[0] = 0;
	is_prime[1] = 0;
	is_prime[2] = 1;
	int i;
	int count4=0;
	for (i = 3; i<1000000; i+= 2)
	{
		is_prime[i] = 1;
		for (int j = 3; j*j<=i; ++j)
		{
			if (is_prime[j])
				if (i%j==0) is_prime[i] = 0;
		}
	}
	i = 1;
	while(1)
	{
		++i;
		if (num_prime(i,is_prime)==4) count4++;
		else count4=0;
		if (count4==4) {cout << i-3 << endl; break;}
	}
	return 0;
}
