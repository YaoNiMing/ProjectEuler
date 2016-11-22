#include <iostream>
using namespace std;

int get_digit(int d, int *digits)
{
	int r = digits[d];
	for (int i=d; i<8; ++i) digits[i] = digits[i+1];
	return r;
}

int main()
{
	const int comb = 9*8*7*6*5*4*3*2;
	int digits[9];
	for (int j=1; j<=9; ++j) digits[j-1] = j;
	for (int j=1; j<=9; ++j) cout << digits[j-1];
	cout << endl;
	cout << get_digit(4,digits) << endl;
	for (int j=1;j<=9;++j) cout << digits[j-1];
	cout << endl;	
	return 0;
}
