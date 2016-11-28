#include <iostream>
#include <algorithm>
using namespace std;

bool is_permut4(int a, int b)
{
	int aa[4];
	int ab[4];
	int i;
	for (i=0;i<4;++i)
	{
		aa[i] = a%10;
		ab[i] = b%10;
		a/=10;
		b/=10;
	}
	sort(aa,aa+4);
	sort(ab,ab+4);
	for (i=0;i<4;++i)
		if (aa[i]!=ab[i]) return 0;
	return 1;
}

int main()
{
	bool is_prime[10000]={0};
	is_prime[0] = 0;
	is_prime[1] = 0;
	is_prime[2] = 1;
	int i,j;
	int count=0;
	for (i = 3; i<10000; i+= 2)
	{
		is_prime[i] = 1;
		for (int j = 3; j*j<=i; ++j)
		{
			if (is_prime[j])
				if (i%j==0) is_prime[i] = 0;
		}
	}

	for (i = 1000; i<10000; ++i)
	{
		if (!is_prime[i]) continue;
		if (i==1487) continue;
		for (j=1002;i+2*j<10000;j+=6)
		{
			if (!is_prime[i+j]) continue; 
			if (!is_prime[i+2*j]) continue;
			if (!is_permut4(i,i+j) || !is_permut4(i,i+2*j)) continue;
			cout << i << i+j << i+2*j << endl;
		} 	
	}

	return 0;
}
