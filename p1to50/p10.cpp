#include <iostream>
using namespace std;

int main()
{
	int pl[500000];
	pl[0] = 2;
	pl[1] = 3;
	int p;
	int i;
	long int total = 0;
	for (i = 2; i < 500000; ++i)
	{
		p = pl[i-1]+2;
		while(true)
		{
			int is_prime = true;
			for ( int j=1;pl[j]*pl[j]<=p;++j)
			{
				if (p%pl[j]==0) is_prime = false;
			}
			if (is_prime) {pl[i] = p; break;}
			p += 2;
		}
		pl[i] = p;
		if (p > 2000000) break;
	}
	for (int j=0; j<i; ++j) total += pl[j];
	cout << total << endl;
	return 0;
}
