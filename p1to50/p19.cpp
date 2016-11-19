#include <iostream>

using namespace std;
int main()
{
	int y,m,d,w,ymd;
	y = 1900;
	m = 1;
	d = 1;
	w = 1;
	int count = 0;	
	do
	{
		++w;
		if (w>7) w=1;
		++d;
		if (y%400==0 && m==2)
		{
			if (d==30) {d=1; ++m;}
		} else if (y%100 == 0 && m==2)
		{
			if (d==29) {d=1; ++m;}
		} else if (y%4 == 0 && m==2)
		{
			if (d==30) {d=1; ++m;}
		} else if (m==2) 
		{
			if (d==29) {d=1; ++m;}
		} else if (m == 4 || m==6 || m==9 || m==11)
		{
			if (d==31) {d=1; ++m;}
		} else 
		{
			if (d==32) {d=1; ++m;}
		}
		if (m==13) {m=1;++y;}
		ymd = 10000*y+100*m+d;
		if (d==1 && w==7 && y>1900) ++count;
	} while (ymd != 20001231);
	cout << count << endl;
	return 0;
}
