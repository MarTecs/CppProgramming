#include<iostream>
#include<string>

using namespace std;


/**
 * 编写一段程序，读入两个字符串，比较两个字符串是否等长，如果不等长，输出长度较大的那个字符串
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {

  string str, str1;
  cin >> str >> str1;
  if(str.size() > str1.size())
  {
    cout << str << endl;
  }
  else if(str.size() < str1.size())
  {
    cout << str1 << endl;
  }
  else {
    cout << "The length of string is equal" << endl;
    return -1;
  }


  return 0;
}
