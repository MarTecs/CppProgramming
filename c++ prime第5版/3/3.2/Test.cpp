#include<iostream>
#include<string>


using namespace std;


/**
 * c++中，如果使用等号进行初始化，则是拷贝初始化，如果不使用等号，则是直接初始化。
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {

  string s1;          //默认初始化，s1是一个空字符串
  string s2 = s1;     //s2的内容是s1的副本
  string s3 = "hiya"; //s3的内容是hiya
  string s4(10, 'c'); //s4的内容是cccccccccc

  //对于用多个值进行初始化，拷贝初始化也可以
  string s5 = string(10, 'c');
  /**
   * 22行代码等同于如下代码
   * string temp(10, 'c');
   * string s5 = temp;
   */

  return 0;
}
