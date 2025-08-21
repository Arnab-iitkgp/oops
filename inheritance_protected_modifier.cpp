#include <bits/stdc++.h>
using namespace std;

class Base{
    protected: // can be inherited but but not exposed to public
    int a=0;//
    private:
    int b;
    public:
    int c;


};
/*

                        public der           pvt der            protected der
    1.Private mem       not inherited         not inherited       not inherited
    3.Protected mem     protected             protected         protected
    2.Public mem        public                privte            protected



*/

class Derived : public Base{ // if we use vis mode protected then var c will slso be protected and hence cant be accesed in public

};
int main () {
ios::sync_with_stdio(0);
 cin.tie(0);
    Derived der;
    cout<<der.c<<endl;
    // cout<<der.a<<endl;// not worked as a is protected so can be accesed inside Der class but not exposed publically 
    
    return 0 ;
}