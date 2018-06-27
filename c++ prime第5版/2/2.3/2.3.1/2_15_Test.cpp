#include<iostream>


/**
 * 下列哪些定义合法，为什么
 * @return [description]
 */
int main()
{
  int ival = 1.01;
  // int &rvall = 1.01;    //必须与一个对象绑定在一起，不能直接赋值
  int &rval2 = ival;
  // int &rval3;             //定义必须绑定一个对象
  std::cout << ival << std::endl;

  return 0;
}
