#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {


  /**
   * 下列vector定义有错么，对于正确的，描述执行结果，对于错误的，说明错误原因
   */


  vector<vector<int>> ivec;           //正确，没有初始化
  // vector<string> svec = ivec;      //错误，因为vector中需要string类型
  vector<string> svec(10, "null");    //用10个null进行初始化，但是不是列表初始化
  cout << svec.size();
  return 0;
}
