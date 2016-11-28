#include <iostream>
using namespace std;

int main()
{
	bool is_prime[1000000]={0};
	is_prime[0] = 0;
	is_prime[1] = 0;
	is_prime[2] = 1;
	int i,j;
	bool unfound = 1;
	bool cg;
	for (i = 3; i<1000000; i+= 2)
	{
		is_prime[i] = 1;
		for (int j = 3; j*j<=i; ++j)
		{
			if (is_prime[j])
				if (i%j==0) is_prime[i] = 0;
		}
	}

	i = 33;
	while (unfound)
	{
		cg = 0;
		i += 2;
		if (is_prime[i]) continue;
		for (j=1;j*j*2<i;++j)
		{
			if (is_prime[i-2*j*j]) {cg=1;break;}
		}
		if (cg) continue;
		unfound = 0;
		cout << i << endl;
	}

	return 0;
}
