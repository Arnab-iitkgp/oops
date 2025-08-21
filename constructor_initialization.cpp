#include <bits/stdc++.h>
using namespace std;
/*
Syntax list for initialisation of constructor

constructor(argument-list):initialisation section{
    //
}

*/

class Test{
    int a;
    int b;
    public:
        // Test(int i,int j):a(i),b(j) //fine
        // Test(int i,int j):a(i),b(i*j) // fine
        // Test(int i,int j):a(i),b(a+j) // this is also fine as long as the sequence of init here matches with the init of variables at top
        // Test(int i,int j):b(i),a(b+j)// WRONG will see garbage value as at top we dec as a-->b but here b-->a
        Test(int i,int j):a(i),b(j)
        {
            cout<<"Constructor of test created\n";
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
        }
};
int main () {
    Test t(3,2);
    
    return 0 ;
}