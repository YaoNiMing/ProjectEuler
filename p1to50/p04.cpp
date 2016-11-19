#include <iostream>
using namespace std;

int is_product(int n)
{
	for (int i=90;i>=82;i--)
	{
		if (n%i == 0 && n/11/i < 1000) return 1;
	}
	return 0;
}

int main()
{
	for (int d2=99; d2>=0 ;--d2)
	{
		int num = 900009+d2*1000+(d2/10)*10+(d2%10)*100;
		if (is_product(num)) { cout << num << endl; break;}
	}
	return 0;
}
