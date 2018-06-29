#include<iostream>
#include<string>
using namespace std;

/**
 * 得到元音字母个数的另一种写法
 * @return [description]
 */

int main()
{
  string str;
  unsigned int vowelCnt = 0;
  cin >> str;
  if (!str.empty())
  {

    for (auto s : str)
    {
      switch(s){
        case 'a': case 'e': case 'i': case 'o': case 'u':   //这里可以放到一行，需要注意一下
          vowelCnt ++;
      }
    }
  }


  cout << vowelCnt << endl;

  return 0;
}
