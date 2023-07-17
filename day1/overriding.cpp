#include<bits/stdc++.h>
using namespace std;
//single
class Animal{
    public:
    void speak(){
        cout<< " they sound"<< endl;


    }
};
class Dog : public Animal{
    public:
    void speak(){
        cout<< "woof"<< endl;
    }
     
};
class Cat  : public Animal{
    public :
    void speak(){
        cout<< " meoww"<<endl;
    }
};

int main(){
    Dog d;
    Animal a;
    Cat c;
    a.speak ();
    d.speak();
    c.speak ();

    return 0;
}
