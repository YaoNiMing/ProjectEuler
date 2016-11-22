#include <iostream>
#include <set>
using namespace std;

bool pandigital(int* digits)
{
	set<int> d;
	for (int i=0;i<9;++i)
		if (digits[i]!=0) d.insert(digits[i]);
	if (d.size() == 9)
		return 1;
	else
		return 0;
}

void itoa(int n, int* a)
{
	int i;
	if (n/10000 == 0) i = 3;
	else i =4;
	while (n!= 0)
	{
		a[i] = n%10;
		n/=10;
		--i;
	}	
}

bool cmp_digits(int* max_digits, int* digits)
{
	for (int i=0;i<9;++i)
	{
		if (digits[i]>max_digits[i]) return 1;
	}
	return 0;
}

void digits_cpy(int* max_digits, int* digits)
{
	for (int i=0;i<9;++i)
	{
		max_digits[i] = digits[i];
	}
}

int main()
{
	int digits[9];
	int max_digits[9] = {0};
	for (int i=9000;i<10000;++i)
	{
		itoa(i,digits);
		itoa(2*i,digits+4);
		if (pandigital(digits))
		{
			if (cmp_digits(max_digits,digits)) digits_cpy(max_digits,digits);
		}
	}
	for (int i=0;i<9;++i) cout<<max_digits[i];
	cout<<endl;
	return 0;
}
