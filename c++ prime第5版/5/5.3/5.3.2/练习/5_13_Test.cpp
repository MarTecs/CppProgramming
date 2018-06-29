#include<iostream>
#include<string>
using namespace std;


/**
 * 下面的代码都有一个错误，指出错误在哪里，并改正
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */

int main(int argc, char const *argv[]) {
  /*
  unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
  char ch = next_text();
  switch (ch) {
    case 'a': aCnt++;
    case 'e': eCnt++;
    default: iouCnt++;
  }


  改为如下
  unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
  char ch = next_text();
  switch (ch) {
    case 'a': aCnt++; break;
    case 'e': eCnt++; break;
    default: iouCnt++;  break;
  }
  */

 unsigned index = some_value();
 switch (index) {
    case 1:
      int ix = get_value();
      ivec[ix] = index;
      break;
    default:
      ix = ivec.size()-1;
      ivec[ix] = index;
 }



 unsigned evenCnt = 0, oddCnt = 0;
 int digit = get_num() % 10;
 switch (digit) {
    case 1,3,5,7,9:
      oddCnt++;
      break;
    case 2,3,6,8,10:
      evenCnt++;
      break;
 }


 unsigned ival = 512, jval = 1024, kval = 4096;
 unsigned bufsize;
 unsigned swt = get_bufCnt();
 switch (swt) {
   case ival:
      bufsize = ival * sizeof(int);
      break;
   case jval:
      bufsize = jval * sizeof(int);
      break;
    case kval:
      bufsize = kval * sizeof(int);
      break;
 }


  return 0;
}
