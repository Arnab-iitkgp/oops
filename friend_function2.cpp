#include <bits/stdc++.h>
using namespace std;
class Y ; // neceesary a s in the X class we are using the Y in friend fn declrtn
class X{
    int data;
    public:
    void setData(int value){
        data = value;
    }
    friend void add(X,Y);
};
class Y{
    int num;
    public:
    void setNum(int value){
        num = value;
    }
    friend void add(X,Y);

};

void add(X o1, Y o2){
    cout<<"the sum of X and Y is : "<<o1.data+o2.num<<"\n";
}

int main () {
ios::sync_with_stdio(0);
 cin.tie(0);
    X a1;
    Y b1;
    a1.setData(4);
    b1.setNum(7);
    add(a1,b1);
    
    return 0 ;
}