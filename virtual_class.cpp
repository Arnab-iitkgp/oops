#include <bits/stdc++.h>
using namespace std;
class Student{
    protected:
    int roll_no;
    public:
        void set_roll_num(int roll){
            roll_no=roll;
        }
        void print_number(void){
            cout<<"Your roll no : "<<roll_no<<endl;
        }

};

class Test : virtual public Student{
    protected:
        float maths,physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(){
            cout<<" marks information: \n"
                << "Maths : "<<maths<<endl
                << "Physics : "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(int s){
            score = s;
          }
        void print_Score(){
            cout<<"Your Score in Sport is : "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private: float total;
    public:
        void display(){
            total = maths+physics;
            print_number();
            print_marks();
            print_Score();
            cout<<"Your Result for the assesment : "<<total<<endl;
        }
};
int main () {
    Result Arnab;
    Arnab.set_marks(98, 95);
    Arnab.set_roll_num(23);
    Arnab.set_score(8);
    Arnab.display();
    
    return 0 ;
}