#include <iostream>

using namespace std;
void print_grid(int n[5][5])
{
	for (int i=0;i<5;++i)
	{
		for (int j=0;j<5;++j)
			printf("%4d",n[i][j]);
		cout << endl;
	}
			
}
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
	//print_grid(n);
	return 0;
}
