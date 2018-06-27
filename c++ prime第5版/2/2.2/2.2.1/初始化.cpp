#include<iostream>


/**
 * 初始化不是赋值，而是创建变量时赋予一个初始值，而赋值的含义是把当前值换成另外一个值
 *
 * 程序代码描述：定义一个名为units_sold的int型变量并初始化为0
 *
 * @return [description]
 */
int main()
{

  //C++11新标准中，使用花括号来初始化变量得到全面的应用，也叫做列表初始化
  int units_sold = 0;
  int units_sold1(0);
  int units_sold2 {0};
  int units_sold3 = {0};


  printf("%d \n", units_sold);
  printf("%d \n", units_sold1);
  printf("%d \n", units_sold2);
  printf("%d \n", units_sold3);



  //当用于内置类型的变量时，如果我们使用列表初始化将会有可能产生丢失信息的风险
  long double ld = 3.1415926536;
  int a{ld}, b = {ld};  //错误：转换未执行，因为存在丢失信息的风险，这里编译器将会爆出警告
  int c(ld), d = ld;    //正确：转换执行，且确实丢失了部分信息

  printf("%d\n", a);

  return 0;


}
