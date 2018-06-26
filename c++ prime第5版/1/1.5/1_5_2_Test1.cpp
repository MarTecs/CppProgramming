#include <iostream>
#include "Sales_item.h"
/**
 * 编写程序，读取多条销售记录，并统计每个ISBN(每本书) 有几条销售记录
 * @return
 */
int main()
{
  Sales_item item1, item2, currItem;
  int cnt = 1;
  if ( std::cin >> item1 )
  {
    currItem = item1;
    while ( std::cin >> item2 )
    {
      if ( currItem.isbn() == item2.isbn() )
      {
        currItem += item2;
        cnt++;
      } else {
        std::cout << currItem << " occurs " << cnt << " times" << std::endl;
        currItem = item2;
        cnt = 1;
      }
    }
    std::cout << item1 << " occurs " << cnt << " times" << std::endl;
  }
  return 0;
}
