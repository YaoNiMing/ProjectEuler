#include <iostream>

using namespace std;

int recurring_cycle(int d)
{
	int rem_l[1000] = {0};
	int rem,l;
	rem_l[0] = 1;
	rem = 1;
	for (l = 1; l<=1000 ;++l)
	{
		rem = (rem*10)%d;
		if (rem == 0) return 0;
		for (int i=0;i<l; ++i)
			if (rem_l[i] == rem) return (l-i); 	
		rem_l[l] = rem;
	}
	return (-1);
}
int main()
{
	int max_l = 0;
	int cur_l;
	int max_d=0;
	for (int d=1;d<=1000;++d)
	{
		cur_l = recurring_cycle(d);
		if (cur_l > max_l)
		{
			max_l = cur_l;
			max_d = d;
		}
	}
	cout << max_d << endl;
	return 0;
}
