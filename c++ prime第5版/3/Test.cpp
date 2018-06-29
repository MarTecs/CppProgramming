#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {

  char c;
  cin >> c;
  if ( (c >= 'A' && c <= 'Z' ) || ( c >= 'a' && c <= 'z'))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
