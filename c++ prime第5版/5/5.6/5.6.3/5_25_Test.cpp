#include<iostream>
#include<stdexcept>
using namespace std;

/**
 * 修改你的程序，使得当第2个数为0时，抛出异常，
 * 先不要设定catch语句，运行程序并真的为除数输入0
 * @return [description]
 */
int main()
{
    int num1, num2;
    while(cin >> num1 >> num2)
    {
        try {
            if(num2 == 0)
                throw runtime_error("Exception：num2 must not be Zero.");
            double num3 = 1.0 * num1 / num2;
            cout << "The result is " << num3;
            return 0;
        } catch (runtime_error err) {
            cout << err.what() << "\nTry again? Enter y or n" <<endl;
            char c;
            cin >> c;
            if(!cin || c == 'n')
                break;
        }
    }
    return 0;
}
