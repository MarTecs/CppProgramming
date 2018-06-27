
/**
 * 下面哪些赋值是不合法的？为什么？哪些赋值是合法的？他们执行了什么操作？
 * @return [description]
 */


#include<iostream>
int main()
{
  int i = 0, &r1 = i;
  double d = 0, &r2 = d;

  /**
   * 如下4行代码都没有报错，都是正确的
   */
  r2 = 3.14159;
  r2 = r1;
  i = r2;
  r1 = d;

  return 0;
}
