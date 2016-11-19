#include <iostream>
using namespace std;

long int find_largest_prime(long int n, long int p)
{
	while (p<n)
	{
		if (n%p==0) return find_largest_prime(n/p,p);
		else p+= (p==2) ? 1 : 2;
	}
	return n;
}
int main()
{
	long int NUM = 600851475143;
	cout << find_largest_prime(NUM,2) << endl;
	return 0;
}
