#include <iostream>
#include <string>

using namespace std;
int main()
{
	string str;
	int num[1000];
	long int max_prod=0;
	long int cur_prod;
	for (int l_num = 0; l_num < 20; ++l_num) 
	{
		cin >> str;	
		for (int d_num = 0; d_num < 50; ++d_num)
		{
			num[l_num*50+d_num] = (int) str[d_num] - 48;
		}
	}
	for (int i=0; i<1000-12; ++i) 
	{
		cur_prod = 1;
		for (int j=i; j<i+13; ++j)
		{
			cur_prod *= num[j];
		}
		if (cur_prod > max_prod) max_prod = cur_prod;
	}
	cout << max_prod << endl;
	return 0;
}
