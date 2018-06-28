#include<iostream>
#include<typeinfo>

int main(int argc, char const *argv[]) {

  int* ip, i, &r = i;
  //int i, *ip = 0;
  //int* ip, ip2;
  std::cout << typeid(ip).name() << std::endl;
  std::cout << typeid(i).name() << std::endl;
  std::cout << typeid(r).name() << std::endl;


  std::cout << "Hello World \n";
  return 0;
}
