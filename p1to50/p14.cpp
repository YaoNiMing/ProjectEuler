#include <iostream>

using namespace std;
int collatz_length(long int n)
{
	int l=1;
	while (n!=1)
	{
		++l;
		if (n%2==0) n/=2;
		else n=3*n+1;
	}
	return l;
}
int main()
{
	int max_cl=0;
	int cl;
	for (long int n=1;n<1000000;++n)
	{
		cl = collatz_length(n);
		if (cl > max_cl) 
		{
			max_cl = cl;
			cout << cl << " " << n <<endl;
		}
	}	
	return 0;
}
