#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	long int num[100]={0};
	long int total = 0;
	char c;
	stringstream res;
	for (int i=0;i<100;++i)
	{
		for (int j=0;j<14;++j)
		{
			cin >> c;
			num[i] = num[i]*10+(int)c - 48;
		}
		for (int j=0;j<36;++j)
			cin >> c;
		total += num[i];
	}
	res << total;
	cout << res.str().substr(0,10) << endl;
	return 0;
}
