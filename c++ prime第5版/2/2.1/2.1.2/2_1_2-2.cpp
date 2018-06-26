#include<iostream>

int main()
{
  unsigned int u = 10;
  int i = -42;
  std::cout << i + i << std::endl;
  std::cout << u + i << std::endl;  //当一个无符号整数与整数进行运算，将会自动转换为无符号数，需要注意取值

  return 0;
}
