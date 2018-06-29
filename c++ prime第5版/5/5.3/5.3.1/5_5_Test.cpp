#include<iostream>
/**
 * 使用 if else 把数字成绩转换成字母成绩
 * <60 60-69 70-79 80-89 90-99 100
 * F    D      C    B      A    A++
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
using namespace std;
int main(int argc, char const *argv[]) {
  /* code */
  vector<string> gradeLevel = {"F","D","C","B","A","A++"};
  string lettergrade;
  0 1 2 3 4 5 6
  -50 / 10
  if (grade < 60)
    lettergrade = gradeLevel[0];
  else
    lettergrade = gradeLevel[(grade - 50) / 10];
  /*
  double grade;
  cin >> grade;
  if (grade < 60)
    cout << "F" << endl;
  else if (grade <= 69 && grade >= 60)
    cout << "D" << endl;
  else if (grade <= 79 && grade >= 70)
    cout << "C" << endl;
  else if (grade <= 89 && grade >= 80)
    cout << "B" << endl;
  else if (grade <= 99 && grade >= 90)
    cout << "A" << endl;
  else
    cout << "A++" << endl;
    */
  return 0;
}
