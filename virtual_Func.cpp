#include <bits/stdc++.h>
using namespace std;
//pre-req :- pointer_to_derClass
class BaseClass{
    public:
    int var_base=1;
    virtual void display(){ //IMP- this virtual fn ensures runtime polymorphism
        cout<<"Displaying Base class variables var_base "<<var_base<<endl;

    }
};
class DerivedClass : public BaseClass{
    public:
        int var_derived=2;
        void display(){
            cout<<"Displaying Base class var_base "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
        }
};

int main () {
BaseClass* base_class_pointer;
BaseClass obj_base;
DerivedClass obj_derived;
base_class_pointer = &obj_derived;
base_class_pointer->display();

    
    return 0 ;
}
/* NOTE;
A base class pointer is used to point to a derived class object.
The display() function is marked virtual in the base class.
Because of virtual, the function call depends on the object type, not the pointer type.
So, even though the pointer is of base type, the derived class function runs.
Without virtual, the base class function would be called instead — no polymorphism.





*/