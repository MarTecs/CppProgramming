#include<iostream>
#include<string>

using namespace std;
/**
 * 从输入中一行一行读取并且进行输出
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {


  string line;

  //每次读入一行直到遇到文件末尾
  while( getline(cin, line))
  {
    cout << line << endl;     //这里因为line中不回读取到换行符，所以我们这里手动加上换行符
  }
  return 0;
}
