#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[]) {

  string str;
  cin >> str;
  //使用decltype关键字来声明计数变量punct_cnt,它的类型是string.size()的返回类型，也就是string::size_type
  decltype(str.size()) punct_cnt = 0;
  for (auto c : str)
    if(ispunct(c))
      punct_cnt++;

  cout << "Character has " << punctNumber << endl;
  return 0;
}
