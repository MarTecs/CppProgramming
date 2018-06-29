#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[]) {

  vector<int> v(10, 0);//用10个0进行初始化
  unsigned grade;
  while(cin >> grade)   //读取成绩
  {
    if(grade <= 100)    //只处理有效成绩
      v[grade/10]++;    //将对应分数段的数值加1
  }

  for (auto s : v)
    cout << s << endl;



  return 0;
}
