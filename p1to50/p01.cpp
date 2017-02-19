#include <iostream>
//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

using namespace std;
int main()
{
	int sum3 = (3+999)*333/2;
	int sum5 = (5+995)*199/2;
	int sum15 = (15+990)*(990/15)/2;
	cout << sum3+sum5-sum15 << endl;
	return 0;
}
