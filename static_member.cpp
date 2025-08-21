// static dat members
#include<iostream>
using namespace std;
class MyClass{
    static int x; // of class as overall not for a particylar instance
    // int x;// non static var-- each instance has differnt x;
    public:
    void set(){x=15;}
    void print(){
        x= x+15;
        cout<<x<<"\n";
    }
};
class PrintJobs{
    int nPages_;
    static int nTrayPages_;//no of pages in the tray; 
    static int nJobs_;
    public:
    PrintJobs(int np):nPages_(np){ // constructor
        
        ++nJobs_;
        nTrayPages_-=np;
    };
    ~PrintJobs(){
        cout<<"the job: "<<nJobs_<<" get destructed\n";
        --nJobs_;
    }
    static int getjobs(){return nJobs_;}
    static int checkpages(){return nTrayPages_;}
    static void loadPages(int np){nTrayPages_+=np;}
};
int PrintJobs::nTrayPages_=500; // defination and initialisation
int PrintJobs::nJobs_=0;

int MyClass::x=0;
int main(){
    MyClass a,b;
    a.set();b.set();
    // a.print(); b.print();
    // a.x =9;
    cout<<"no of pageS: "<<PrintJobs::checkpages()<<"\n"; // we cant acces nTraypages_ directly as it is a pvt dta member
    cout<<"jobs : "<<PrintJobs::getjobs()<<"\n";

    PrintJobs j1(20);
    PrintJobs j2(15);
    cout<<"jobs : "<<PrintJobs::getjobs()<<"\n";
    cout<<"current remainig pages: "<<PrintJobs::checkpages()<<"\n"; // or by object like j2.checkpages()

    {
        // this is a scope
        PrintJobs j1(60); // this job will be destructed outside this scope
        cout<<"jobs : "<<PrintJobs::getjobs()<<"\n";
        cout<<"current remainig pages: "<<PrintJobs::checkpages()<<"\n";
        PrintJobs::loadPages(100);
    }
        cout<<"jobs : "<<PrintJobs::getjobs()<<"\n";
        cout<<"current remainig pages: "<<PrintJobs::checkpages()<<"\n";

    
    return 0;

}