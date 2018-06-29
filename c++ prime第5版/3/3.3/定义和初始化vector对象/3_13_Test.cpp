#include <iostream>
#include <vector>

using namespace std;


/**
 * 下列vector对象各包含多少个元素，这些元素的值分别是什么
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {

  vector<int> v1;                   //默认初始化
  vector<int> v2(10);               //10个0
  vector<int> v3(10, 42);           //10个42
  vector<int> v4{10};               //只有1个10
  vector<int> v5{10,42};            //10 42
  vector<string> v6{10};            //10个空白字符串
  vector<string> v7{10, "hi"};


  // vector<int> v10 = 10;


  cout << v1.size() << endl;
  cout << v2.size() << endl;
  cout << v3.size() << endl;
  cout << v4.size() << endl;
  cout << v5.size() << endl;
  cout << v6.size() << endl;
  cout << v7.size() << endl;







  return 0;
}
