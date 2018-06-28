#include<iostream>
#include<string>

using namespace std;

/**
 * c++标准中并没有要求标准库对下标的合法范围进行检测，因此如果进行不合法访问将会产生不可预知的结果
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */

int main(int argc, char const *argv[]) {

  string s("some thing");
  for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index )
  //c++语言规定&&中，只有左侧条件为真才会检查右侧运算对象情况，因此当检测到下标合理时我们才可以在和气取值范围内进行访问
    s[index] = toupper(s[index]); //将当前字符改成大写形式

  cout << s << endl;
  return 0;
}
