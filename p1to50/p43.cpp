#include <iostream>
using namespace std;
int main()
{
	int i,j,d,t,c;
	int digits[10];
	int total_num[11]={0};
	int num[10];
	int facs[10];
	facs[0]=1;
	for (i=1;i<10;++i) facs[i] = facs[i-1]*i;
	for (i=0;i<3628800;++i)
	{
		t=i;
		for (j=0;j<10;++j) digits[j] = j;
		for (j=0;j<10;++j)
		{
			d = t/facs[9-j];
			num[j] = digits[d];
			while (d<9-j) {digits[d]=digits[d+1];d++;}
			t %= facs[9-j];
		}
		if (num[3]%2!=0) continue;
		if ((num[2]+num[3]+num[4])%3!=0)continue;
		if (num[5]%5!=0) continue;
		if ((num[4]*100+num[5]*10+num[6])%7!=0) continue;
		if ((num[5]+num[7]-num[6])%11!=0) continue;
		if ((num[6]*100+num[7]*10+num[8])%13!=0) continue;
		if ((num[7]*100+num[8]*10+num[9])%17!=0) continue;
		c = 0;	
		for (j=9;j>=0;--j)
		{
			d = total_num[j+1]+num[j]+c;
			c = d/10;
			total_num[j+1] = d%10;
		}
		total_num[0] = total_num[0]+c;
	}
	for (j=0;j<=10;++j) cout<<total_num[j];
	cout << endl;
	return 0;
}
