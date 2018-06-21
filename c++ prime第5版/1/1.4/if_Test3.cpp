
/**
 * 练习1.10：除了++运算符将运算对象的值加1之外，还有一个递减运算符，实现将值减少1，编写程序，使用递减运算符在循环中按递减顺序打印出10到0之间的整数
 * 本次练习(1.19)内容：修改1.10所写的程序，使其能处理用户输入的第一个数比第二个数小的情况
 * @return [description]
 */
#include<iostream>
int main()
{
  int num1 = 0, num2 = 0;
  if( std::cin >> num1)
  {
    if( std::cin >> num2  && num1 > num2 )
    {
      for (int i = num1; i >= num2; i--)
      {
        std::cout << i << std::endl;
      }
    }
    else{
      for (int i = num2; i >= num1; i--)
      {
        std::cout << i << std::endl;
      }
    }
  }


  return 0;
}
