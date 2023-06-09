#include <iostream>
using namespace std;
int main()
{
    int a;
    char ch;
    double r;
    cout << "Enter integer,character and double value";
    cin >> a >> ch >> r;
    try
    {
        throw a;
        throw ch;
        throw r;
    }
    catch (int a)
    {
        cout << "Integer value";
    }
    catch (char ch)
    {
        cout << "Character value";
    }
    catch (double r)
    {
        cout << "Double value";
    }
}