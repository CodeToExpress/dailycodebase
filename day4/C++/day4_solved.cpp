#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	string str1;
	cin >> str1;
	int count = 0;
	for(int i = 0; i < str1.size(); i++)
	{
		if(str1[i] == 'a'  || str1[i] == 'e' ||str1[i] == 'i' || str1[i] == 'o' ||str1[i] == 'u')
		{
		count++;
		}
	}
	cout << "Vowels are:" << count;
	return 0;
}
