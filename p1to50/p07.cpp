#include <iostream>
using namespace std;

int main()
{
	long int pl[10001];
	pl[0] = 2;
	pl[1] = 3;
	long int p;
	for (int i = 2; i< 10001; ++i)
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
	}
	cout << pl[10000] << endl;
	return 0;
}
