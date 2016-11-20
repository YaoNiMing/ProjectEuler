#include <iostream>

using namespace std;
int main()
{
	int fib_num[3][1000];
	int res_pos = 1;
	int add_pos1, add_pos2;
	int carry,tmp;
	int i;
	for (i=0;i<1000;++i)
	{
		fib_num[0][i] = ((i==0) ? 1 : 0);
		fib_num[1][i] = ((i==0) ? 1 : 0);
		fib_num[2][i] = 0;
	}
	i = 2;
	while (fib_num[res_pos][999] == 0)
	{
		res_pos = (res_pos + 1) % 3;
		++i;
		add_pos1 = (res_pos + 1) % 3;
		add_pos2 = (res_pos + 2) % 3;
		carry = 0;
		for (int j=0;j<1000;++j)
		{
			tmp = fib_num[add_pos1][j]+fib_num[add_pos2][j]+carry;
			carry = tmp / 10;
			fib_num[res_pos][j] = tmp % 10;
		}
	}
	cout << i << endl;
	return 0;
}
