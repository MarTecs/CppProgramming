#include<iostream>
int main()
{

  int currVal = 0, val = 0;
  if ( std::cin >> currVal )
  {
    int cnt = 1;
    while ( std::cin >> val ) {
      if ( val == currVal )
        ++cnt;
      else{
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
        currVal = val;
        cnt = 1;
      }
    }//while循环结束
    //记住打印文件中最后一个值的个数
    std::cout << currVal << " occurs " << cnt << " times" << std::endl;
  }//最外层的if语句在这里结束
  return 0;
}
