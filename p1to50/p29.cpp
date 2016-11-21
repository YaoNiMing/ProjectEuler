#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int ab[101][601];
	int a,b;
	int m,n;
	int count;
	for (a=0;a<101;++a)
		for (b=0;b<601;++b)
			ab[a][b] = 0;
	for (a=2;a<=100;++a)
		for (b=2;b<=100;++b)
		{

			m = a;
			n = 1;
			for (int i=2; i<=10 && m==a ; ++i)
				for (int j = 2; j<=6 && m==a; ++j)
					if (pow(i,j)==a) {m=i;n=j;}

			if (ab[m][n*b] == 0) { ++count;}
			ab[m][n*b] = 1;
		}
	cout << count << endl;
	return 0;
}
