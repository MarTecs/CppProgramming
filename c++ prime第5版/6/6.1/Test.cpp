#include <iostream>
using namespace std;

/**
 * 准备编写求一个数的阶乘的程序
 * @param  val [description]
 * @return     [description]
 */
int fact(int val);

int main()
{
    cout << fact(5) << endl;
    return 0;

}

/**
 * @param val :要求阶乘的数
 * @return val的阶乘
 */
int fact(int val)
{
    int rel = 1;
    while(val)
    {
        if(val != 0)
        {
            rel *= val;
            val--;
        }
    }
    return rel;
}
