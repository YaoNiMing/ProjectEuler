#include <iostream>

using namespace std;
void print_grid(int grid[20][20])
{
	for (int i=0; i<20; ++i)
	{
		for (int j=0; j<20; ++j)
		{
			cout << grid[i][j] << " ";
		}
		cout <<endl;
	}
}

int main()
{
	int grid[20][20];
	for (int i=0; i<20; ++i)
	{
		for (int j=0;j<20; ++j)
		{
			cin >> grid[i][j];
		}
	}
	int possible;
	int prod;
	int max_prod = 0;
	int dx,dy;
	for (int i=0;i<20;++i)
	{
		for (int j=0;j<20;++j)
		{
			for (int d=1; d<=4; ++d)
			{
				if (d==1) possible = (i>=3 && j<=16);
				else if (d==2) possible = (j<=16);
				else if (d==3) possible = (i<=16 && j<=16);
				else possible = (i<=16);	
				if (possible)
				{
					if (d==1) {dy=-1; dx=1;}
					else if (d==2) {dy=0; dx=1;}
					else if (d==3) {dy=1; dx=1;}
					else {dy=1; dx=0;}
					prod = grid[i][j];
					prod *= grid[i+dy][j+dx];
					prod *= grid[i+2*dy][j+2*dx];
					prod *= grid[i+3*dy][j+3*dx];
					if (prod > max_prod) max_prod = prod;
				}
			}
		}
	}
	cout << max_prod << endl;
	return 0;
}
