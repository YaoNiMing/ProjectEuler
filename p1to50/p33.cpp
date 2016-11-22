#include <iostream>
#include <set>
#include <utility>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a%b);
}

int main()
{
	set<pair<int,int> > s;
	int d1,d2,n;
	int num = 1;
	int den = 1;
	for (d1 = 1; d1<=9 ; ++d1)
	{
		for (d2 = 1; d2<=9; ++d2)
		{
			for (n=1; n<=9; ++n)
			{
				if ((d1*10+d2)*n == d2 * (10*d1+n)) 
					if (10*d1+n < 10*d1+d2) s.insert(make_pair(n,d2));
				if ((d1*10+d2)*n == d2 * (10*n+d1)) 
					if (10*n+d1 < 10*d1+d2) s.insert(make_pair(n,d2));
				if ((d1*10+d2)*n == d1 * (10*n+d2)) 
					if (10*n+d2 < 10*d1+d2) s.insert(make_pair(n,d1));
				if ((d1*10+d2)*n == d1 * (10*d2+n)) 
					if (10*d2+n < 10*d1+d2) s.insert(make_pair(n,d1));
			}
		}
	}
	for (set<pair<int, int> >::iterator it = s.begin(); it!=s.end(); ++it)
	{
		num *= it->first;
		den *= it->second;
	}
	cout<<den/gcd(den,num)<<endl;
	return 0;
}
