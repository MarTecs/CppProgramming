#include<iostream>
#include<vector>
using namespace std;
/**
 * 从cin读取一组词，然后存入vector一个对象，然后把所有词都改写为大写形式
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {
  vector<string> v;
  string str;
  while(cin >> str)
    v.push_back(str);

  for(string &c : v)
  {
    for(int i = 0; i < c.size(); i++)
    {
      if(isalpha(i))
        c[i] = toupper(c[i]);
    }
  }

  cout << v[0] << v[1] << endl;

  return 0;
}
