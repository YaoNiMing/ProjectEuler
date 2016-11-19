#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	ifstream file ("p22_names.txt");
	string str;
	string names[6000];
	int n=0;
	int score;
	int total_score = 0;
	while (file.good() )	
	{
		getline(file , str, ',');
		names[n] = string(str,1,str.length()-2);
		n++;
	}
	sort(names,names+n);
	for (int i=0;i<n;++i)
	{
		score = 0;
		for (int j=0;j<names[i].length();++j) 
			score+=(int)names[i][j] - 64;
		score*=(i+1);
		total_score+=score;
	} 
	cout << total_score << endl;
	return 0;
}
