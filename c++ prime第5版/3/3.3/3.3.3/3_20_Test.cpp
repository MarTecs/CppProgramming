#include<iostream>
#include<vector>

using namespace std;
/**
 * 读入一组整数并把它们存入一个vector对象，将每个相邻的整数和输出出来
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */

int main(int argc, char const *argv[]) {
  vector<int> vec;
  int number;
  while (cin >> number)
  {
    vec.push_back(number);
  }

  for (int i = 0; i < vec.size()/2; i++)
  {
    cout << vec[i] << " " << vec[vec.size()-1-i] << endl;
  }


  return 0;
}
