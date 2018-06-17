/**
 * 指出下列哪些语句是合法的
 * @return [description]
 */
#include<iostream>
int main()
{
  std::cout << "/*";                //合法
  std::cout << "*/";                //合法
  std::cout << /* "*/" */;          //非法
  std::cout << /* "*/" "/*" */;     //非法
  return 0;
}
