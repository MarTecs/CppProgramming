#include<iostream>


/**
 * 请解释下述定义，在这些定义中有非法的么？如果有，为什么？
 * @return [description]
 */
int main()
{
  int i = 0;

  //double* dp = &i;  //报错
  int* dp = &i;   //等价于int *dp = &i;
  // std::cout << *dp << std::endl;
  //int *ip = i;    //报错，不可以从int 转换为 int *
  int *p = &i;
}
