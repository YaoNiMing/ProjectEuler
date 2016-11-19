#include <iostream>

using namespace std;
int main()
{
	int n[200]={0};
	n[0] = 1;
	int total = 0;
	int i,j,d,c1,c2;
	for ( i = 1; i<= 100; ++i)
	{
		c1 = 0;
		c2 = 0;
		for ( j=0;j<200;++j)
		{
			d = i*n[j]+c2*10+c1;
			c2 = d/100;
			c1 = d%100/10;
			n[j] = d%10;
		}
	}
	for (j=0;j<200;++j) total += n[j];
	cout << total << endl;
	return 0;
}
