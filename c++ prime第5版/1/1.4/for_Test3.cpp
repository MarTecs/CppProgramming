#include<iostream>
int main()
{
  int n1, n2;
  std::cout << "Enter two numbers:";
  std::cin >> n1 >> n2;
  for ( int i = n1; i <= n2; i++ )
    std::cout << i << std::endl;
  return 0;
}
