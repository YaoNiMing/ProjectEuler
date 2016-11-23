#include <iostream>
using namespace std;

int main()
{
	int prod = 1;
	int di = -1;
	int i = 1;
	int n = 0;
	int p = 1;
	int digits[6];
	while (i<=1000000)
	{
		if (di<0)
		{
			int t = ++n;
			while (t>0)
			{
				di++;
				digits[di] = t%10;
				t/=10;
			}
		}
		if (i==p) {prod*=digits[di]; p*=10;}
		di--;
		i++;
	}
	cout << prod << endl;
	return 0;
}
