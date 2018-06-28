#include<iostream>


/**
 * string对象读取时，会自动忽略开头的空白，包括换行符，制表符，空格，
 * string遇到读取过程中，遇到空白则读取结束
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
using namespace std;
int main(int argc, char const *argv[]) {

  string s1, s2;
  cin >> s1 >> s2;
  cout << s1 << s2 << endl;
  return 0;
}
