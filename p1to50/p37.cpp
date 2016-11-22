#include <iostream>
using namespace std;

int digit_num(int n)
{
	int r=1;
	while (n>10)
	{
		n/=10;
		r*=10;
	}
	return r;
}

bool cp(int n, bool* is_prime)
{
	int m = n;
	while (m>0)
	{
		if (!is_prime[m]) return 0;
		m /= 10;
	}
	m = n;
	while (m>0) 
	{
		if (!is_prime[m]) return 0;
		m = m % digit_num(m);
	}
	return 1;
}


int main()
{
	bool is_prime[1000000]={0};
	is_prime[0] = 0;
	is_prime[1] = 0;
	is_prime[2] = 1;
	int i,j,d1,d2,d3,d4;
	int n0,n1,n2,n3,n4;
	int total=0;
	for (i = 3; i<1000000; i+= 2)
	{
		is_prime[i] = 1;
		for (int j = 3; j*j<=i; ++j)
		{
			if (is_prime[j])
				if (i%j==0) is_prime[i] = 0;
		}
	}

	for (i = 3; i<=7 ;i+=4)
	{
		for (j=3; j<=7; j+=4)
		{
			n0 = 10*i+j;
			for (d1 = 1; d1<=9 ; d1+=2)
			{
				n1 = n0/10*100+10*d1+j;
				if (cp(n1,is_prime)) total+=n1;
				for (d2 = 1; d2<=9; d2+=2)
				{
					n2 = n1/10*100+10*d2+j;
					if (cp(n2,is_prime)) total+=n2;
					for (d3 = 1; d3<=9;d3+=2)
					{
						n3 = n2/10*100+10*d3+j;
						if (cp(n3,is_prime)) total+=n3;
						for (d4 = 1; d4<=9; d4+=2)
						{
							n4 = n3/10*100+10*d4+j;
							if (cp(n4,is_prime)) total+=n4;
						}
					}
				}
			}
		}
	}
	for (i=2;i<=7;++i)
		for (j = 3; j<=7;j+=4)
		{
			n0 = 10*i+j;
			if (cp(n0,is_prime)) total+=n0;
		}
	
	cout << total << endl; 

	return 0;
}
