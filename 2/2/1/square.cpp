#include<iostream>
using namespace std;	//ʹ��std�е���������std::�ͱ��ʵ�� 

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
