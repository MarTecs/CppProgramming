#include<iostream>
#include<string>
using namespace std;


/**
 * 使用范围for语句将字符串中所有字符用X代替
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {
  string str = "qewqewq $#@$#@23523 2#@$";
  for (decltype(str.size()) i = 0; i != str.size(); i++)
  {
    if(!isspace(str[i]))
      str[i] = 'X';
    else
      continue;
  }

  cout << str << endl;
  return 0;
}
