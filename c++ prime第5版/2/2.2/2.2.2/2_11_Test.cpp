#include<iostream>

int main()
{
  extern int ix = 1024; //此时声明将会变为定义
  int iy; //声明
  extern int iz;  //声明


  return 0;
}
