#include<iostream>
using namespace std;
 
template <typename T>
void abcd(const T&x)
{ static int count = 0;
cout << "x = " << x << " count = " << count << endl;
++count;
return;
}
int main()
{
abcd<int> (1);
cout << endl;
abcd<int>(1);
cout << endl;
abcd<double>(1.1);
cout << endl;
return 0;
}
