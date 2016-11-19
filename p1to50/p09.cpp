#include <iostream>

using namespace std;
int main()
{
	int SUM = 1000;
	int found = 0;
	int i,j,k;
	for (i = 1; i<999; ++i)
	{
		for (j=i; j<=(1000-i)/2; ++j)
		{
			k = 1000 - i - j;
			if (k*k == i*i + j*j) { found = 1; break;}
		}
		if (found) break;
	}
	cout << '(' << i << ',' << j << ',' << k << "): " << i*j*k << endl;
	return 0;
}
