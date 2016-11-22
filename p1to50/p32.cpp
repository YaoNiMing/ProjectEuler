#include <iostream>
#include <set>
using namespace std;

int get_digit(int *digits, int d)
{
	int r = digits[d];
	for (int i=d;i<8;++i) digits[i] = digits[i+1];
	return r;
}

int main()
{
	int facs[10];
	int digits[9];
	set<int> res;
	int total = 0;
	int i,j,n,l,m,r,p,t;
	facs[0] = 1;
	for (i=1;i<10;++i) facs[i] = facs[i-1]*i;
	for (i=0;i<facs[9];++i)
	{
		n = i;
		for (j=0;j<9;++j) digits[j] = j+1;
		r = 0;
		p = 0;
		for (j=9;j>=1;--j)
		{
			t = get_digit(digits,n/facs[j-1]);
			if (j==9) l = t;
			else if (j==8) m = t;
			else if (j>=5) r = 10*r + t;
			else p = 10*p+t;
			n = n%facs[j-1];
		}
		if (l * (1000*m+r) == p) res.insert(p);
		if ((10*l+m) * r == p) res.insert(p);	
	}
	for (set<int>::iterator it=res.begin(); it!= res.end(); ++ it) total+= *it;
	cout << total << endl;
	return 0;
}
