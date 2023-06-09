#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int, string> student;
    student.insert({200,"Alice"});
    student.insert({201,"John"});
    student.insert({202,"Jacob"});
    student.insert({203,"Chris"});
    student.insert({204,"Nolan"});
    student.insert({205,"Chandler"});
    student.insert({206,"Tyson"});
    cout<<"Size of the map is: "<<student.size()<<endl;
    map<int,string>::iterator it;
    cout<<"Printing map value \n";
    cout<<"Key \t Value \n";
    for(it =student.begin();it!=student.end();++it)
    {
        cout<<(it->first)<<" \t "<<(it->second)<<endl;
    }
    return 0;
}
