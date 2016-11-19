#include <iostream>
using namespace std;

int sum_square(int n)
{
	return (n+1)*(n+1)*n*n/4;
}
int square_sum(int n)
{
	return (2*n+1)*(n+1)*n/6;
}
int main()
{
	int N = 100;
	cout << sum_square(N) - square_sum(N) << endl;
	return 0;
}
