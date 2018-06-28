#include<iostream>
#include<string>
using namespace std;
/**
 * 从标准输入中读入多个字符串并把它们连接在一起，用空格把输入的字符串分隔开来
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {
  string str, str1;
  while(cin >> str1)
  {
    if (str.empty())
      str +=  str1;
    else
      str += (" " + str1);
  }

  cout << str << endl;


  return 0;
}
