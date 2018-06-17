
/**
 * 编写循环，将50到100的整数相加
 * @return [description]
 */
#include<iostream>
int main()
{
  int sum = 0, v = 50;

  while ( v <= 100 )
  {
    sum += v;
    v++;
  }

  std::cout << "The sum from 50 to 100 is " << sum << std::endl;
}
