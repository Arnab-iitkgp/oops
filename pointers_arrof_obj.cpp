#include <bits/stdc++.h>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id=a;
            price=b;
        }
        void getData(){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"price of this item is "<<price<<endl;
        }
};
int main () {
    int size =3;
    // int * ptr = &size;
    ShopItem *ptr  = new ShopItem[size];// store address obj
    ShopItem* ptrtemp=ptr;
    //grocitem,vegitem, hardwareitem
    int p;
    float q;
    for(int i=0;i<size;i++){
        cout<<"enter Id and Price of this item "<<i+1;
        cin>>p>>q;
        ptrtemp->setData(p,q);
        ptrtemp++;
    }

    for(int i=0;i<size;i++){
        cout<<"Item Number : "<<i+1<<endl;
        (ptr+i)->getData();

    }
    
    return 0 ;
}