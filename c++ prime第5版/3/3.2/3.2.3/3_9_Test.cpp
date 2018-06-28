#include<iostream>
#include<string>
using namespace std;

/**
 * 下面的程序合法吗？如果不合法，为什么？
 *
 * 自己认为不合法，因为长度为0！但实际上仍然合法，输出0 0
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */

int main(int argc, char const *argv[]) {

  string s;
  cout << s.size() << s[0] << s.size() << endl;
  return 0;
}
