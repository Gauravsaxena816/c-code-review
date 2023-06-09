#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream output("file1.txt");
    string st;
    getline(output,st);
    cout<<"Information from the file is Retrieve successfully \n";
    cout<<st;
    return 0;
}