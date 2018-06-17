


/**
 * 编写程序，从cin读取一组数，输出其和
 * @return [description]
 */
#include<iostream>
int main()
{
  int sum = 0, value = 0;
  while ( std::cin >> value )
    sum += value;
  std::cout << std::endl << sum << std::endl;

  return 0;

}
