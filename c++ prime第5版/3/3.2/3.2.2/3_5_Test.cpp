#include<iostream>
#include<string>

using namespace std;


/**
 * 编写一段程序从标准输入中读入多个字符串并将它们连接在一起，输出连接成的大字符串
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {
  /* code */
  string str, str1;
  while(cin >> str)
    str1 += str;
  cout << str1 << endl;
  return 0;
}
