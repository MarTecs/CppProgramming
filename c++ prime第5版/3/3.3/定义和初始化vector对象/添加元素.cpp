#include<iostream>
#include<vector>

using namespace std;


/**
 * push_back负责把一个值当成vector对象的尾元素，加到vector对象的尾端
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {


  vector<int> v1;
  for (int i = 0; i <= 99; i++)
  {
    v1.push_back(i);
  }

  cout << v1[0] << endl;
  return 0;
}
