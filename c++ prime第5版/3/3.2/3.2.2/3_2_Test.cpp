#include<iostream>
#include<string>
using namespace std;

/**
 * 编写一段程序从标准输入中一次读入一整行
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {
  string line;
  while ( getline(cin, line) )
  {
    cout << line << endl;
  }

  return 0;
}
