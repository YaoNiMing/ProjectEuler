#include <iostream>

using namespace std;
int main()
{
	long int n[22][22]={0};
	for (int i=1;i<22;++i)
	{
		for (int j=1;j<22;++j)
		{
			if (i==1 && j==1) n[i][j] = 1;
			else n[i][j] = n[i][j-1] + n[i-1][j];
		}
	}
	cout << n[21][21] << endl;
	return 0;
}
