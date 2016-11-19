#include <iostream>

using namespace std;
int d(int n)
{
	int sum=0;
	for (int i=1; i<=n/2;++i)
		if (n%i==0) sum+= i;
	return sum;
}
int main()
{
	int dn[28123];
	int abundant[28123]={0};
	int abundant_sum[28123]={0};
	int total = 0;
	for (int i=0;i<28123;++i)	dn[i] = d(i+1);
	for (int i=0;i<28123;++i) 
		if (dn[i]>i+1) abundant[i] = 1;

	for (int i=1;i<=28123;++i)
		for (int j = 1; j<=i/2; ++j)
			if (abundant[j-1] && abundant[i-j-1]) 
				abundant_sum[i-1] = 1;
	for (int i=0;i<28123;++i)
		if (!abundant_sum[i]) 
			total+=(i+1);
	cout << total << endl;
	return 0;
}
