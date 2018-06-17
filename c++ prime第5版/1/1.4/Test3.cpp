/**
 * 给定两个整数，打印两个整数之间的整数
 * @return [description]
 */
#include<iostream>
int main()
{
  int n1 = 0, n2 = 0;
  std::cout << "Enter the two numbers:";
  std::cin >> n1 >> n2;
  while ( n1 <= n2 ) {
    /* code */
    std::cout << n1 << std::endl;
    n1++;
  }


  return 0;
}
