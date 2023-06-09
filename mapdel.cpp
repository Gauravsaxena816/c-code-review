#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> my_map;
    my_map.insert({"Cow",1});
    my_map.insert({"Cat",2});
    my_map.insert({"Lion",3});
    for(auto it=my_map.begin();it!=my_map.end();++it)
    {
        if(it->first=="Cat")
        {
            my_map.erase(it);
            cout<<"Key is deleted successfully \n";
            break;
        }
    }
    cout<<"Printing the values of map \n";
    cout<<"Key \t Value \n";
    for(auto it=my_map.begin();it!=my_map.end();++it)
    {
        cout<<it->first<<" \t "<<it->second<<endl;
    }
    return 0;
}
