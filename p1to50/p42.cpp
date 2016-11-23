#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream file ("p42_words.txt");
	string str;
	int count=0;
	int i;
	int w;
	bool is_triangular[210]={0};
	for (i=1;i<=20;++i)
		is_triangular[i*(i+1)/2-1] = 1;
	while (file.good())
	{
		getline(file, str, ',');
		w = 0;
		for (i=1;i<str.length()-1;++i)
			w+=(int)str[i] - 64;
		if (is_triangular[w-1]) count++;
	}
	cout << count << endl;
	return 0;
}
