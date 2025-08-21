#include <bits/stdc++.h>
using namespace std;

class Base{
    int data1;//private so cant be inheritable;
    public:
    int data2;
    void setData();//declrtn
    int getData1();
    int getData2();
};
void Base :: setData(void){ //defntn
    data1 = 10;
    data2=20;
}
int Base ::  getData1(){
    return data1;
}
int Base :: getData2(){
    return data2;
}
class Derived : public Base{ // classs is derived publically
    int data3;
    public:
     void process();
     void display();
};

void Derived :: process(){
    data3= data2*getData1();
}

void Derived:: display(){
    cout<<"value of data1 :"<<getData1()<<"\n"; // as pvt of base class , so cant acccess the data direcly
    cout<<"value of data2 :"<<data2<<"\n";
    cout<<"value of data3 :"<<data3<<"\n";
}
int main () {

Derived der;
der.setData();
cout<<der.getData1()<<endl;
der.process();
der.display();
    return 0 ;
}