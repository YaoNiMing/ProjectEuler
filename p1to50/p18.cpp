#include <iostream>

using namespace std;
int main()
{
	int pyramid [15][15]={0};
	int max_total [15][15] = {0};
	int m = 0;
	int l,r;
	for (int i=0;i<15;++i)
	{
		for (int j=0; j<=i;++j)
		{
			cin >> pyramid[i][j];
			if (i==0) max_total [i][j] = pyramid[i][j];
			else
			{
				if (j==0) l = 0;
				else l = max_total[i-1][j-1];
				if (j==i) r = 0;
				else r = max_total[i-1][j];
				max_total[i][j] = pyramid[i][j] + ((l>r) ? l : r);
				if (max_total[i][j] > m) m = max_total[i][j];
			}
		}
	}
	cout << m << endl;

	return 0;
}
