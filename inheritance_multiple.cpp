#include <bits/stdc++.h>
using namespace std;

/* multiple inheritance syntax
class Derived: visibility-mode base1, visibility-mode base2;{
}
*/


class Base1{
    protected: 
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    }
};
class Base2{
    protected: 
    int base2int;
    public:
    void set_base2int(int a){
        base2int=a;
    }
};

class Derived: public Base1, public Base2{
    public:
        void show(){
            cout<<"The value of base1int is "<<base1int<<endl;
            cout<<"The value of base2int is "<<base2int<<endl;

        }
};
/* the inherited derive class will lokk like this
 class derived{
 protected:
    base1int,base2int;
 public:
    set_base1int();
    set_base2int();
    show();
};
    NOTE: there may be more than 2 base
*/
int main () {
    Derived der;
    der.set_base1int(45);
    der.set_base2int(75);
    der.show();
    return 0 ;
}