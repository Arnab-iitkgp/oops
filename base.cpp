#include<iostream>
#include<vector>
#include<cmath> // c denotes that it std for cpp files
using namespace std;

class Point{
    public: int x;int y;int z;  // if no constructor then these will behave as argument 
    
};
class Complex{
    public:
    double re,im;
    double norm(){
        return sqrt(re*re +im*im);
    }
};
class Stack{
    private:int top; vector<int>arr; //data member
    public:
    Stack():top(-1){ //constructor
        arr.resize(100);
    }
    ~Stack(){};// deconstructor
    //member function
    void push(int x){
        arr[++top]=x;
    }
    int topcalc(){
        return arr[top];
    }
    void pop(){
       top--;
    }
    bool empty(){
        return top==-1;
    }
};
class Employee{
    private:
    string name;
    string address;
    int fixed_sal;
    int var_sal;
    public:
    Employee(){
        fixed_sal= 20000; var_sal=5000;
    }
    string getName(){return name;}
    void setName(string nameinp){name = nameinp;}// or this->name = nameinp
    void setAddress(string address){this->address=address;}
    int salary_fixed(){return fixed_sal;}
    int salary(){return fixed_sal+var_sal;}
};
int main(){
    Point a = {0,2};
    a.x = 5;
    cout<<a.x<<" "<<a.y<<" "<<a.z<<endl;
    Complex c = {1.2,9.6};
    cout<<c.norm();
    Stack s;
    s.push(23);
    cout<<"\nstackkk\n";
    cout<<s.topcalc()<<"\n";

    Employee Arnab;
    cout<<Arnab.salary()<<"\n";
    cout<<Arnab.getName()<<"\n";//blank
    Arnab.setName("Arnnnab");
    cout<<Arnab.getName()<<"\n";

    // s.top =-1;

}