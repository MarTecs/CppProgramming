#include<iostream>
#include<string>
using namespace std;
/**
 * 编写一段程序，读入两个字符串，比较是否相等并输出结果，如果不相等，输出较大的字符串。
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */

int main(int argc, char const *argv[])
{
  string str, str1;
  cin >> str >> str1;
  if ( str == str1 )
    cout << "equal" << endl;
  else if ( str > str1 )
    cout << str << endl;
  else
    cout << str1 << endl;

  return 0;
}
