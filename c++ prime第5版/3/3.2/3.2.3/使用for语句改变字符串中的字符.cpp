#include<iostream>
#include<string>
using namespace std;

/**
 * 将一个字符串中的每个字符都变成大写
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {

  string s("Hello World!!!");
  for (auto &c : s)           //c是一个引用，因此赋值语句中将改变c所绑定的s中字符的值
  {
    c = toupper(c);
  }
  cout << s << endl;

  return 0;
}
