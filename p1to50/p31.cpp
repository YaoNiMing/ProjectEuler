#include <iostream>
using namespace std;

int main()
{
	int coin[8] = {1,2,5,10,20,50,100,200};
	int n[8][201];
	int i,j;
	for (int c = 0; c<8; ++c){
		if (c==0) 
		{
			for (i = 0; i<= 200; ++i)
				n[0][i] = 1;
		}
		else
		{
			for (i = 0; i<= 200; ++i)
			{
				n[c][i]=0;
				for (j = 0; j<= i/coin[c]; ++j)
					n[c][i]+=n[c-1][i-j*coin[c]];
			}
		}
	}
	cout << n[7][200] << endl;
}
