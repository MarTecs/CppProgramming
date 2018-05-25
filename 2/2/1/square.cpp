#include<iostream>
using namespace std;	//使得std中的名字无需std::就变得实现 

double square(double x)
{
	return x * x;
}

void print_square(double x)
{
	cout <<"the square of\t" << x << "\tis\t" << square(x) << "\n";	
} 

int main()
{
	print_square(1.234);
	system("pause");
	
 } 
