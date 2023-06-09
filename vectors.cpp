#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,1,3,2,5,8,9,93,20};
    vector<int>::iterator iter;
    for(iter = vec.begin();iter != vec.end();++iter)
    {
        cout<<*iter<<endl;
    }

    vec.push_back(10);
    vec.push_back(11);
    vec.push_back(12);
    vec.push_back(13);
    vec.push_back(14);
    vec.push_back(15);
    vec.push_back(16);
    vec.push_back(17);

    cout<<"after adding some vectors"<<endl;

    vector<int>::iterator itr;
    for(itr = vec.begin();itr != vec.end();++itr)
    {
        cout<<*itr<<endl;
    }
return 0;
}