#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class player
{
    int jersey_no;
    string name;

    public:
    virtual void calstat() = 0;

};

class batsman:public player{
    float runs;
    float overs;
    public:

    batsman(float x , float y){
        runs = x;
        overs = y;
    }
    void calstats()
       { float result = 0.0 ;
        result = runs/overs;
        cout<<result;

       } 
};

int main(){
    batsman b(198.0,12.0);
    b.calstat();
    return 0;
}