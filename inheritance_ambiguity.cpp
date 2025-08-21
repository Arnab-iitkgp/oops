#include <bits/stdc++.h>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"How are you?\n";
    }
};
class Base2{
    public:
     void greet(){
        cout<<"kaise ho\n";
     }
};

class Derived:public Base1, public Base2{
    int a;
    public:
    void greet(){
        Base1::greet(); // ambiguity resolution , you have to say konsa greet use karna hai??
    }
};
// Ambiguity 2
class B{
    public:
    void say(){
        cout<<"Hello World\n";
    }
};
class D : public B{
    int a;
    public:
    // D's new say() method will override base class's say() method
    void say(){
        cout<<"Hey Arnab\n";
    }
};
int main () {
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Derived der;
    // der.greet();

    // Ambguity 2;
    D d;
    d.say();
    
    return 0 ;
}