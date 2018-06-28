#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[]) {


  string word = "Hello China!";
  for ( auto w : word ) //使用auto关键字让编译器来决定w的类型，其实这里w的类型是char
    cout << w << endl;
  return 0;
}
