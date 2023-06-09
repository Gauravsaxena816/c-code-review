#include <iostream>
using namespace std;
class Addition {
public:
//simply calculates the integer
    int ADD(int X,int Y)    
    {
        return X+Y;
    }
    //concatenates the string
    int ADD() {              
        string a= "HELLO";
        string b=" GAURAV";   
       string c= a+b;
       cout<<c<<endl;
        
    }
};
int main(void) {
    Addition obj;   
    cout<<obj.ADD(128, 15)<<endl; 
    obj.ADD();  
    return 0;
}