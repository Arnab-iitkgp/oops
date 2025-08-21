#include <bits/stdc++.h>
using namespace std;

class Complex{
    int re;
    int im;
    public:
        void set_data(int i,int j){
            re=i;
            im=j;
        }
        void get_data(){
            cout<<"the complex num is "<< re<<" + "<<im<<"j\n";
        }
};
int main () {
    Complex c;
    Complex* ptr = &c;
    // Complex* ptr = new Complex-- also correct
    c.set_data(3,5);
    c.get_data();
    (*ptr).set_data(5,9);
    (*ptr).get_data();
    ptr->get_data();


    
    return 0 ;
}