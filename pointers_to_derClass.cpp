#include <bits/stdc++.h>
using namespace std;
class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying Base class variables var_base "<<var_base<<endl;

    }
};
class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base class var_base "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
        }
};
int main () {   
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer= &obj_derived;// pointing base class pointer to derived class
    base_class_pointer->var_base =34;
    base_class_pointer->display();// as pointer is of base class so the display function of base class will run not the derived class
    // so this function is binding from base class hence its happening in runtime
    // base_class_pointer->var-derived=123;//will throw error

    DerivedClass* derived_class_ptr = &obj_derived;
    derived_class_ptr->var_derived= 98;
    derived_class_ptr->var_base=123;
    derived_class_ptr->display();// so this binding form derived class function 
    return 0 ;
}