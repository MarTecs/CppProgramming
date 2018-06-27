#include<iostream>
int reused = 42;
int main()
{
  int unqiue = 0;
  std::cout << reused << " " << unique << std::endl;
  int reused = 0; //新建局部变量，覆盖了全局变量reused
  std::cout << reused << " " << unique << std::endl;

  //输出#3：显式的访问全局变量reused，输出42 0
  std::cout << ::reused << " " << unique << std::endl;


  return 0;
}
