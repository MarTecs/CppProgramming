#include<iostream>

//通过下列using声明，我们可以使用标准库中的名字
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {

  cout << "Enter two numbers:" << endl;
  int v1, v2;
  cin >> v1 >> v2;
  cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;
  return 0;
}
