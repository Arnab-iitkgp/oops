#include<iostream>
using namespace std;    

class MyClass{
   int data_;
   public:
    MyClass(int i):data_(i){}
    friend void display(const MyClass &a); //Able to access data even though it is private inclass myclass // this prototype inclusion is must
};
void display (const MyClass &a){  // const is used as the display functin is read only fn so it should not change the data of a
    cout<<"data: "<<a.data_<<"\n";
}

class Complex;// forward declaration
class Calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
    int sumRealComplex(Complex,Complex);// just giving declartion , we will define later,
};
class Complex{
    int a,b;
    // individually declarinf fn as friends
    // friend int Calculator :: sumRealComplex(Complex, Complex);
    
    // Aliter : Declaring  the entire Calculator class as friend
    friend class Calculator;
    public:
    void setNumbers(int n1 ,int n2){
        a = n1;
        b=n2;
    }
    friend Complex sumComplex(Complex o1, Complex o2);// not a member function
    void printNumber(){
        cout<<a<<" + "<<b<<"i\n";
    }
};
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumbers((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int Calculator :: sumRealComplex(Complex o1, Complex o2){
    return (o1.a+o2.a);
}

int main(){
    // MyClass obj(10);
    // display(obj);
    Complex c1,c2,sum;
    c1.setNumbers(1,4);
    c2.setNumbers(4,5);
    sum=sumComplex(c1,c2);
    // sum.printNumber();
    Calculator calc;
  int realsum=  calc.sumRealComplex(c1,c2);
  cout<<"the real part sum = "<<realsum<<"\n";
    return 0;
}
/*
// properties of minimal friend functions
1. not in the scope of class
2. so it cannot be called from the object of the class---like c1.sumComplex = invalid
3. usually contains the object as argument
4. can be declared inside public or pvt

*/