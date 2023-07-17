#include<bits/stdc++.h>
using namespace std;
class A{
    
    public:
    //int c;
    A(){
        cout<<" a is const"<< endl;
    }
    ~A(){
        cout<<" a is Dst"<< endl;
    }

};
class B: public A{
    public:
    B(){
        cout<<" B is const"<< endl;
    }
    ~B(){
        cout<<" B is Dst"<< endl;
    }

};
int main()
{
    B obj;
    
}
