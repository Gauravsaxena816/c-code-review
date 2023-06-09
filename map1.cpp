#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> m;
    m.insert({1,5});
    m.insert({2,9});
    m.insert({3,7});
    auto it=m.begin();
    for(;it!=m.end();++it)
    {
        if(it->first==5)
        {
            cout<<"Key is already present in the map \n";
            cout<<"the value of this key is: "<<it->second<<endl;
            break;
        }
    }
    if(it==m.end())
    {
        m.insert({5,6});
        cout<<"Key is inserted in the map successfully \n";
    }
    cout<<"Printing the values of map \n";
    cout<<"Key \t Value \n";
    for(auto it=m.begin();it!=m.end();++it)
    cout<<it->first<<" \t "<<it->second<<endl;
    return 0;
}
