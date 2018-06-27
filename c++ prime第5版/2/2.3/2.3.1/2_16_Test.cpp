#include<iostream>
int main()
{
  int i = 0, &r1 = i;
  double d = 0, &r2 = d;
  r2 = 3.14159;
  r2 = r1;      //两种类型不一致，会报错
  i = r2;       //两种类型不一致，会报错
  r1 = d;       //两种类型不一致，会报错

  return 0;
}
