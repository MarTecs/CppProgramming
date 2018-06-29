#include<iostream>
#include<Sales_item.h>
using namespace std;

/**
 * 使用throw表达式避免把两个不同的Sales_item对象相加
 * @return [description]
 */
int main()
{
  Sales_item item1, item2;
  while (cin >> item1 >> item2)
  {
    try {
      //执行添加两个item对象的代码
      //如果添加失败，引发异常
    } catch (runtime_error err){
      //当爆发异常，说明两个item对象的ISBN不一致
      cout << err.what() << "\nTry again?Enter y or n" << endl;
      char c;
      cin >> c;
      if ( !cin || c=='n' )
        break;  //跳出while循环
    }
  }
  return 0;
}
