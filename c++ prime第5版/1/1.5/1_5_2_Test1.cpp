#include <iostream>
#include "Sales_item.h"
/**
 * 编写程序，读取多条销售记录，并统计每个ISBN(每本书) 有几条销售记录
 * @return
 */
int main()
{
  Sales_item currItem, item1;
  int cnt = 1;
  if ( std::cin >> currItem )
  {
    while ( std::cin >> item1 )
    {
      if ( currItem.isbn() == item1.isbn() )
      {
        cnt++;
      }
      else
      {
        std::cout << currItem.isbn() << " occurs " << cnt << " times" << "\n";
        currItem = item1;
      }
    }
    std::cout << currItem.isbn() << " occurs " << cnt << " times" << std::endl;
  }
  return 0;
}
