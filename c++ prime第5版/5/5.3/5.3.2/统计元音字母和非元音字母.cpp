#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	string str;
	unsigned int vowelCnt, vowelNcnt;	//元音字母个数 非元音字母个数

	cin >> str;
	if (!str.empty())
	{
		for (auto s : str)
			switch (s)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					vowelCnt++;
					break;
				default:				//s不是元音字母
					vowelNcnt++;
					break;
			}
	}

	system("pause");
	return 0;
}
