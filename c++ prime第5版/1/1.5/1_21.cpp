/**
 * 编写程序，读取两个ISBN相同的Sale_item对象，输出它们的和。
 * @return [description]
 */

#include <iostream>
#include "Sales_item.h"
int main()
{
  Sales_item book, book1;
  if ( std::cin >> book  )
  {
    if ( std::cin >> book1 )
      book += book1;
  }

  std::cout << book;
}
