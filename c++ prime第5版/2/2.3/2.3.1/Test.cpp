
/**
 * c++ 中的 右值引用
 * @return [description]
 */


#include<iostream>



int main()
{
  int ival = 1024;

  //通过声明符写成&d的形式来进行引用，d表示一个声明的变量名
  int &refVal = ival;   //refVal指向ival（是ival的另一个名字）
  // int &refVal2;      //报错：引用必须被初始化


  /**
   * 引用因为从声明开始就必须与其初始值绑定在一起，因此我们需要在最开始定义引用时必须给定初始值
   */
}
