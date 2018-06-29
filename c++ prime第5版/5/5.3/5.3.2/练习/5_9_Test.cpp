

/*使用一系列if语句统计从cin读入的文本中有多少个元音字母*/
#include<iostream>
#include<string>
using namespace std;
int main()
{


	string line;
	unsigned int vowelInt = 0;
	while (getline(cin, line))
	{
		cout << line.size() << endl;
		for (auto s : line)
			switch (s)
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				vowelInt++;
				break;
			}
	}

	system("pause");
	return 0;
}
