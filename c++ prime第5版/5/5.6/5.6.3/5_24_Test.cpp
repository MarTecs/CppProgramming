#include<iostream>
#include<stdexcept>
using namespace std;

/**
 * 修改你的程序，使得当第2个数为0时，抛出异常，
 * 先不要设定catch语句，运行程序并真的为除数输入0
 * @return [description]：应用程序将会停止运行
 */
int main()
{
  int num1, num2;
  cin >> num1 >> num2;
  cout << num1 / num2 << endl;

  return 0;
}
