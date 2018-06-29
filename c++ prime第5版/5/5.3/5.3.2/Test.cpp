#include<iostream>
#include<string>
using namespace std;



int main()
{
	unsigned vowelCnt = 0;
	string str;
	cin >> str;
	while ( !str.empty() )
	{
		for (auto s : str)
		{
			switch (s)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					vowelCnt++;
					break;
			}

			/*
			另外一种合法的写法
			switch (s)
			{
				case 'a': case 'e': case 'i': case'o': case 'u':
					vowelCnt++;
					break;
			}
			*/
		}
	}
	cout << vowelCnt << "Hello World";
	// system("pause");
	return 0;

}
