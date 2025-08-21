#include <bits/stdc++.h>
using namespace std;
class Student{
    protected:
    int roll_num;
    public:
    void set_roll_num(int);
    void get_roll_num();
};
void Student :: set_roll_num(int roll){
    roll_num=roll;
}
void Student :: get_roll_num(){
    cout<<"The roll num : "<<roll_num<<"\n";
}

class Exam : public Student{
    protected:
          float maths;
          float physics;
     public:
         void set_marks(float, float);
         void get_marks();
};
void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}
void Exam :: get_marks(void){
    cout<<"the score in maths is "<<maths<<endl;
    cout<<"the score in physics is "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:
    void display(){
        get_roll_num();
        get_marks();
        cout<<"Your Percentage is "<<(maths+physics)/2<<endl;
    }
};


int main () {
    Result arnab;
    arnab.set_roll_num(23);
    arnab.set_marks(100.0,98.0);
    arnab.display();
    return 0 ;
}
/*
    if we are inheriteing B from A and C form B >   A-->B-->C
     1. A is Base class of B and B is the Base class of C
     2. A-->B-->C is called inheritance path

*/