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
	int dn[10000];
	int sum = 0;
	for (int i=0;i<10000;++i)	dn[i] = d(i+1);
	
	for (int i=0;i<10000;++i)
	{
		if (dn[i]<=10000 && dn[i]!=i+1)
		{
			if (dn[dn[i]-1]==i+1) sum+= (i+1);
		}
	}
	cout << sum << endl;
	return 0;
}
