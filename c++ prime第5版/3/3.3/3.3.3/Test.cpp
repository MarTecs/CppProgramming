




#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> v{1,2,3,4,5,6,7,8,9};
  for (auto &i : v)                //如果写成(auto i : v)  改变i的值，v中的值将不会改变，因为是拷贝初始化
    i *= i;
  for (auto i : v)
    cout << i << " ";
  cout << endl;
  return 0;
}
