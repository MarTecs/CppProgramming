/**
 * 输入表示多个ISBN的多条销售记录来测试上一个程序，每个ISBN的记录应该聚在一起
 * @return [description]
 */
#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item currItem, item1;
  if ( std::cin >> currItem )
  {
    while ( std::cin >> item1 )
    {
      if ( currItem.isbn() == item1.isbn() )
      {
        currItem += item1;
      }
      else
      {
        std::cout << currItem << std::endl;
        currItem = item1;
      }

    }

    std::cout << currItem << std::endl;
  }
  return 0;
}
