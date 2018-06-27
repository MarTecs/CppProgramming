#include<iostream>

/**
 * 书上源码
 * @return [description]
 */
int main()
{
  //如果想声明一个变量而非定义它，就需要在变量名字前面加上extern关键字
  extern int i; //声明而非定义i
  int j;  //声明并且定义j


  /**
   * 注意：
   * 1. 如果extern中给定了一个初始值，那么就不是声明而是定义，此时extern将不会起到任何作用
   * 2. 函数体内部，如果试图初始化一个extern关键字标记的变量，将引发错误。
   * 3. 变量只能被定义一次，但是可以被声明多次！
   */


}
