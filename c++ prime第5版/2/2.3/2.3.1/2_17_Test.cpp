#include<iostream>

/**
 * 执行下面的代码将会输出什么结果
 * @return [description]
 */
int main()
{
  int i, &ri = i;
  i = 5;
  ri = 10;
  std::cout << i << " " << ri << std::endl;


  return 0;
}
