#include<iostream>


/**
 *
 * 下列变量的初值分别是什么
 *
 * 注意：string类规定如果没有指定初值则生成一个空串。
 *
 * @return [description]
 */

std::string global_str;       //空串
int global_int;               //0
int main()
{
  int local_int;              //自动生成
  std::string local_str;      //空串

  std::cout << global_str << " " << global_int << " " << local_int << " " << local_str << "d" << std::endl;

  return 0;
}
