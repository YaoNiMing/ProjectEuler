#include <iostream>

using namespace std;

int count_letters(int n)
{
	int lt20[20] = {0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
	int ties[8] = {6,6,5,5,5,7,6,6};
	int count = 0;
	if (n==1000) count = 11;
	else if (n==0) count = -3;
	else if (n < 20) count = lt20[n];
	else if (n < 100) 
		count = ties[n/10-2] + lt20[n%10];
	else 
		count = 10 + lt20[n/100] + count_letters(n%100);
	return count;	
}
int main()
{
	int total = 0;
	for (int i=1;i<=1000;++i) total += count_letters(i);
	cout << total << endl;	
	return 0;
}
