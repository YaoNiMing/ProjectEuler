#include <iostream>
#include <cmath>
using namespace std;

int make_palindrome(int n, int l, int type)
{
	int r = n;
	int p = pow(10,l);
	int i;
	if (type == 1) i = l-1;
	else i = l;
	while (i > 0)
	{
		r += (n % (int)(round(pow(10,i))))/(int)(round(pow(10,i-1)))*p;
		--i;
		p *= 10;
	}
	return r;
}

bool palindrome_binary(int n)
{
	int bin[20];
	int i=0;
	int j=0;
	while (n>0) {bin[i] = n%2; n /= 2; ++i;}
	i--;
	while (i>j) 
	{
		if (bin[i]!=bin[j]) return 0;
		i--;
		j++;
	}
	return 1;
}

void print_binary(int n)
{
	while (n>0) {cout << n%2; n/=2;}
	cout << endl;
}

int main()
{
	int total = 0;
	int n;
	int p11,p12,p21,p22,p31,p32;
	for (n=1;n<=999;++n)
		if (n%10 != 0)
		{
			p31 = make_palindrome(n,3,1);
			p32 = make_palindrome(n,3,2);
			if (palindrome_binary(p31)) total+=p31;
			if (palindrome_binary(p32)) total+=p32;
			if (n <= 99)
			{
				p21 = make_palindrome(n,2,1);
				p22 = make_palindrome(n,2,2);
				if (palindrome_binary(p21)) total+=p21;
				if (palindrome_binary(p22)) total+=p22;	
			}
			if (n <= 9)
			{
				p11 = make_palindrome(n,1,1);
				p12 = make_palindrome(n,1,2);
				if (palindrome_binary(p11)) total+=p11;
				if (palindrome_binary(p12)) total+=p12;
			}
		}
	cout << total << endl;
	return 0;
}
