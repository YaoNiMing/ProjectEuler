#include <iostream>
using namespace std;

int main()
{
	int max_count = 0;
	int max_p = 0;
	int count;
	for (int p=3; p<=1000; ++p)
	{
		count = 0;
		for (int i=1; i<=p/2; ++i)
			for (int j=1;j<=i;++j)
			{
				int k  = p-i-j;
				if (i*i+j*j==k*k) count++;
			}
		if (count>max_count) {max_count = count; max_p = p;}
	}
	cout << max_p << endl;
	return 0;
}
