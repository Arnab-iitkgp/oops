#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
private:
    double re_, im_;

public:
    Complex(double re = 0.0, double im = 0.0) : re_(re), im_(im) // Ctor
    {
        cout << "Ctor: (" << re_ << "," << im_ << ")" << endl;
    }
    ~Complex() { cout << "Dtor:(" << re_ << "," << im_ << ")" << endl; } // Dtor
    double norm() { return sqrt(re_ * re_ + im_ * im_); }
    void print() { cout << "|" << re_ << "+j" << im_ << "| =" << norm() << endl; }
};
int main()
{
    unsigned char buf[100];              // Bufferforplacementofobjects
    // Complex *pc = new Complex(4.2, 5.3); // new:allocatesmemory,callsCtor
    // Complex *pd = new Complex[2];        // new[]:allocatesmemory
    // calls defaultCtortwice
    Complex *pe = new (buf) Complex(2.6, 3.9); // placementnew: only callsCtor
    Complex *ab = new (buf)Complex(1,6);
    // Noalloc.of memory, uses buf
    // Useobjects
    // pc->print();
    // pd[0].print();
    // pd[1].print();
    pe->print();
    // Releaseofobjects- can bedoneinanyorder
    // delete pc;      // delete: calls Dtor,releasememory
    // delete[] pd;    // delete[]:calls2Dtor’s,releasememory
    pe->~Complex(); // Nodelete:explicitcalltoDtor.Usewith extreme care
}