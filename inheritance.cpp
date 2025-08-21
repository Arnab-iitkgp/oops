#include <bits/stdc++.h>
using namespace std;
// base class
class Employee{
    float salary;
    public:
    int id;// have to make public to be inherited in the child
    Employee(int inp){
        id=inp;
        salary =45;
    }
    Employee(){} // default constructor-- when we make derived class then the base classs get clalled so we have no default thatswhy mad
};
// derived class syntax
/*
class {{derived_class-name}} : {{visibility-mode}} {{base-class-name}}{
    class members/method/etc.... // default visibility mode is private

}
    pvt vis mode - public mem of base class becomes pvt members of the derived class;
    public vis mode- public mem od=f base class becomes the public of the derived class
    pvt members of base class are never inherited

    */
// class Programmer:Employee{ // by default pvt mode, so in main we cant access the id
//     public:
//     int langcode=9;
//     Programmer(int inpid){
//         id = inpid;
//     }
//     void getId(){
//         cout<<id<<"\n";
//     }
// };

class Programmer: public Employee{ // here it has been made public so we can easily access in the main
    public:
    int langcode=9;
    Programmer(int inpid){
        id = inpid;
    }
    void getId(){
        cout<<id<<"\n";
    }
};

int main () {
    Employee Arnab(1),Adi(3);
    Programmer skillF(10);
    skillF.getId();
    cout<<skillF.id<<"\n";
    return 0 ;
}