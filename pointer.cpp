#include <bits/stdc++.h>
using namespace std;

int main () {
ios::sync_with_stdio(0);
 cin.tie(0);

    int * ptr = new int(78);
    cout<<ptr<<"\n"; //address
    cout<<*ptr<<"\n";
    // int ptr = new int(79);// this is wrong the new operator always returns a pointer to the allocated memory.
    int * arr = new int[3];// dynamically allocated array
    arr[0]=1;
    arr[1]=9;
    arr[2]=10;
    // delete operator
    delete ptr;
    delete []arr;// must delete
    cout<<arr[0]; // as delted so now garbage val

    return 0 ;
}