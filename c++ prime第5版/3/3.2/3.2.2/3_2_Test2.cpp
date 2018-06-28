#include<iostream>
#include<string>

using namespace std;

/**
 * 编写一段程序从标准输入中一次读入一个词
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {
  string word;
  while (cin >> word)
    cout << word << endl;

  return 0;
}
