#include <iostream>
#include <string>
using namespace std;

template <class T>
T min1(T number1, T number2)
{
    return (number1 < number2) ? number1 : number2;
}

template <class T>
T max1(T number1, T number2)
{
    return (number1 > number2) ? number1 : number2;
}
int main()
{
    int num1 = 5;
    int num2 = 3;
    cout << "minimum of 5, 3 is:" << min1(num1, num2) << endl;
    cout << "maximum of 5, 3 is:" << max1(num1, num2) << endl;
    double num3 = 5.5;
    double num4 = 3.5;
    cout << "minimum of 5.5, 3.5 is:" << min1(num3, num4) << endl;
    cout << "maximum of 5.5, 3.5 is:" << max1(num3, num4) << endl;
    string hello = "hello";
    string hi = "hi";
    cout << "minimum of \"hello\" and \"hi\" is:" << min1(hello, hi) << endl;
    cout << "maximum of \"hello\" and \"hi\" is:" << max1(hello, hi) << endl;
    return 0;
}
