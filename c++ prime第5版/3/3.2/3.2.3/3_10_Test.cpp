#include<iostream>
#include<string>

using namespace std;


/**
 * 编写一段程序，读入一个包含标点的字符串，将标点符号取出后出书字符串剩余的部分
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {

  string str, str1;
  cin >> str;
  for (auto &s : str)
    if(!ispunct(s))
      str1 += s;
  cout << str1 << endl;

  return 0;
}
