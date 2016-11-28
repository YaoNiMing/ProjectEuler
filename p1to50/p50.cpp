#include <iostream>
using namespace std;

bool is_prime(int n)
{
	for (int i=2;i*i<=n;++i)
	{
		if (n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int pl[1000];
	int pi = 0;
	int sum, start, presum;
	bool unfound = 1;
	presum = 0;
	for (int i=2;pi<1000;i++)
	{
		if (is_prime(i))
		{
			pl[pi] = i;
			pi++;
			presum += i;
		}
	}
	cout << presum<< endl;
	for (int l=1000; unfound; --l)
	{
		start = 0;
		presum -= pl[l-1];
		sum = presum;
		while (sum < 1000000)
		{
			if (is_prime(sum))
			{
				cout << sum << endl;
				unfound = 0; break;
			}
			sum = sum - pl[start] + pl[start+l-1];
			start++;
		}	
	}
	return 0;
}
