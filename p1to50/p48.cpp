#include <iostream>
using namespace std;

int main()
{
	int cur_digits[10];
	int tot_digits[10]={0};
	int n,i,p,c,t;
	for (n=1;n<=1000;++n)
	{
		cur_digits[0] = 1;
		for (i=1;i<10;++i) cur_digits[i] = 0;
		for (p=1;p<=n;++p)
		{
			c = 0;
			for (i=0;i<10;++i)
			{
				t = cur_digits[i] * n + c;
				cur_digits[i] = t % 10;
				c = t / 10;
			}
		}
		c = 0;
		for (i=0;i<10;++i)
		{
			t = cur_digits[i] + tot_digits[i] + c;
			tot_digits[i] = t % 10;
			c = t / 10;
		}
	}
	for (i=9;i>=0;--i) cout << tot_digits[i];
	cout << endl;
	return 0;
}
