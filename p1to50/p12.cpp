#include <iostream>
using namespace std;

int num_factor(int n, int pl[100001])
{
	int nf=1;
	int np;
	int i=0;
	while (n!=1)
	{
		np=0;
		while(n%pl[i]==0) 
		{
			np++;
			n /= pl[i];
		}
		nf *= (np+1);
		i++;
	}
	return nf;
}

int main()
{
	int pl[100001];
	pl[0] = 2;
	pl[1] = 3;
	int p;
	int n=0;
	int nf=0;
	for (int i = 2; i< 100001; ++i)
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
	while (nf<500)
	{
		n++;
		nf = num_factor(n*(n+1)/2,pl);
	}
	cout << n*(n+1)/2 << endl;
	return 0;
}
