#include<iostream>
int main()
{

  //使用endl 与 \n 的区别就是：endl会刷新缓冲区，使得栈中的东西重新刷新一次，将会效率低下，endl除了\n还有flush的意思
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1 << " and " << v2
            << " is " << v1 + v2 << std::endl;
  return 0;
}
