
/**
 * 读取数量不定的输入数据
 * @return [description]
 */
#include<iostream>
int main()
{
  int sum = 0, value = 0;
  //读取数据直到遇到文件尾（可以是正常的文件结束符，也可以是输入错误），计算所有读入的值的和
  //从键盘输入文件结束符：win下是ctrl + z然后按Enter或Return键
  while (  std::cin >> value )
  /*
  //当使用istream对象作为条件时，其效果是检测流的状态，如果流是有效的，
  //当使用那么就会检测成功，当遇到一个错误输入(输入不是整数)或者文件结束符，
  //就会变为无效，将会使得条件为假
  */
    sum += value; //等价于sum = sum + value;

  std::cout << "Sum is:" << sum << std::endl;
  return 0;
}
