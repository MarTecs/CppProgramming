#include<iostream>

int main()
{
  bool b = 42;
  std::cout << b << std::endl;      //1
  int i = b;
  std::cout << i << std::endl;      //1
  i = 3.14;
  std::cout << i << std::endl;      //3
  double pi = i;
  std::cout << pi << std::endl;     //3.0


  //当给无符号的类型(unsigned char)进行赋值，如果超过范围，结果则是该数字对256进行模运算取余
  unsigned char c = -1;
  std::cout << c << std::endl;
  //255,当一个负数对256求模运算，则是这个负数加上256然后在对256求模运算
  // -1 % 255 =（-1 + 256 ）% 256 = 255



  //当给有符号类型进行赋值的时候，如果超过范围，结果则是未定义的
  signed char c2 = 256;
  std::cout << c2 << std::endl;     //256
  return 0;
}
