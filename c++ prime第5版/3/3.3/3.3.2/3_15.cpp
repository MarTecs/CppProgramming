#include<iostream>
#include<vector>

using namespace std;


/**
 * 用cin读入一组字符串，并把它们存入一个vector对象中
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {
  string str;
  vector<string> v;
  while(cin >> str)
    v.push_back(str);

  cout << v.size() << endl;
  return 0;
}
