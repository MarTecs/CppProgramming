

/*ʹ��һϵ��if���ͳ�ƴ�cin������ı����ж��ٸ�Ԫ����ĸ*/
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
