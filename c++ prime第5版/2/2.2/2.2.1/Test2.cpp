#include<iostream>

/**
 * 变量在初始化没有赋值将会给定一个默认值，默认值如何给将会由变量的类型以及所处的位置决定
 * 内置类型在未被初始化前，如果位于函数外部将会被默认初始化为0.如果是内部，则不会被初始化( * 一个未被初始化的内置类型的变量的值是未定义的！)。
 * @return [description]
 */


int a1;
int main()
{
  int a;
  std::cout << a1 << " " << a << std::endl;



  return 0;
}
