
/**
 * 编写代码分别更改指针的值以及指针所指对象的值
 * @return [description]
 */

#include<iostream>
int main()
{
  int num = 30;
  int *p = &num;  //p被初始化，并且存着num的地址
  *p = 44;
  std::cout << *p << " " << num << std::endl;


  return 0;
}
