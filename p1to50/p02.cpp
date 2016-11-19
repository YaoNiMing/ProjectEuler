#include <iostream>

using namespace std;
int main()
{
	int fib [1000];
	fib[0] = 1;
	fib[1] = 2;
	int total = 2;
	for (int i = 2; i<1000; ++i) 
	{
		fib[i]=fib[i-2]+fib[i-1];
		if (fib[i] > 4000000) break;
		if (i%3==1) total += fib[i];
	}	
	cout << total << endl;
	return 0;
}
