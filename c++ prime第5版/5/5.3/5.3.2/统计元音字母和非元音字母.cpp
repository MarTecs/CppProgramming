#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	string str;
	unsigned int vowelCnt, vowelNcnt;	//Ԫ����ĸ���� ��Ԫ����ĸ����

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
				default:				//s����Ԫ����ĸ
					vowelNcnt++;
					break;
			}
	}

	system("pause");
	return 0;
}
