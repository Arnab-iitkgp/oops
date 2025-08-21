#include <bits/stdc++.h>
using namespace std;
class C2;
class C1{
    int val1;
    friend void exchange(C1&, C2&);//decl
    public:
        void intData(int n){
            val1 = n;
        }
        void print(){
            cout<<val1<<"\n";
        }
};
class C2{
    int val2;
    friend void exchange(C1&, C2&);//decl
    public:
        void intData(int n){
            val2 = n;
        }
        void print(){
            cout<<val2<<"\n";
        }
};

void exchange(C1 &x, C2 &y){
    int temp = x.val1;
    x.val1=y.val2;
    y.val2 = temp; // swapped due to pass by refernce
}
int main () {
ios::sync_with_stdio(0);
 cin.tie(0);
    C1 a;
    C2 b;
    a.intData(33);
    b.intData(76);
    exchange(a,b);
    a.print();
    b.print();
    
    return 0 ;
}