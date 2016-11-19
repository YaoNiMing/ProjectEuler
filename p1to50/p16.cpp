#include <iostream>

using namespace std;
int main()
{
	int n[400]={0};
	n[0] = 1;
	int e,i,d,c;
	int total = 0;
	for ( e = 1; e<= 1000; ++e)
	{
		c = 0;
		for ( i=0;i<400;++i)
		{
			d = 2*n[i]+c;
			c = d/10;
			n[i] = d%10;
		}
	}
	for (int j=0;j<400;++j) total += n[j];
	cout << total << endl;
	return 0;
}
