#include <iostream>

using namespace std;
int main()
{
	int num_list[10];
	int rank = 1000000-1;
	int factorials[10];
	int res[10];
	int shift_found;
	for (int i = 0; i<10; ++i) {
		num_list[i] = i;
		if (i==0) factorials[i] = 1;
		else factorials[i] = factorials[i-1]*i;
	}
	for (int i = 9; i>=0; --i)
	{
		res[i]=num_list[rank/factorials[i]];
		rank -= rank/factorials[i]*factorials[i];
		shift_found = 0;
		for (int j=0; j<i; ++j)
		{
			if (num_list[j]==res[i]) shift_found = 1;
			if (shift_found) num_list[j] = num_list[j+1];
		}
		cout << res[i];	
	}
	cout << endl;
	return 0;
}
