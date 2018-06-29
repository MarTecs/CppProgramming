#include<iostream>
#include<vector>
using namespace std;
/**
 * 下面的程序合法么？不合法，请改正
 *
 * vector<int> ivec;
 * ivec[0] = 42;
 *
 * 不合法，因为ivec没有初始化，所以不可以访问，可能会内存溢出
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {
  vector<int> ivec;
  int num;
  while(cin >> num)
    ivec.push_back(num);

  for(auto &s : ivec)
    cout << s << endl;

  return 0;
}
