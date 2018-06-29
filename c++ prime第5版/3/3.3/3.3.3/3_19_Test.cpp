#include<iostream>
#include<vector>

using namespace std;

/**
 * 如果想定义一个含有10个元素的vector对象，所有元素的值都是42，请列举出三种不同的实现方法
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {
  vector<int> v(10, 42);
  vector<int> v1{42,42,42,42,42,42,42,42,42,42};
  vector<int> v2 = {42,42,42,42,42,42,42,42,42,42};




  return 0;
}
