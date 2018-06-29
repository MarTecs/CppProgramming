#include<iostream>
#include<vector>


using namespace std;


/**
 * 用cin读入一组整数并把它们存入一个vector对象
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {
  int num;
  vector<int> v;
  while( cin >> num )
    v.push_back(num);
  cout << v.size();

  return 0;
}
