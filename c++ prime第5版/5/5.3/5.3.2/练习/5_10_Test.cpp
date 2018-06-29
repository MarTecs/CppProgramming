#include<iostream>
#include<string>
using namespace std;
##include <iostream>

/**
	֮统计大小写元音字母的个数
*/
int main()
{
	string line;
	unsigned int vnelCnt = 0, vnelNcnt = 0;
	while(getline(cin, line))
	{
		for(auto s : line)
		{
			switch(s)
			{
				case 'a':	case 'e':	case 'i':	case 'o':	case 'u':
				case 'A':	case 'E':	case 'I':	case 'O':	case 'U':
					vnelCnt++;
					break;
				default:
					vnelNcnt++;
					break;
			}
		}
	}
	cout << vnelCnt << endl;


	return 0;
 }
