#include <bits/stdc++.h>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
          title =s;
            rating= r;
        }
       virtual void display(){
            cout<<"Base class run\n";
        }

};

class CWHVideo: public CWH{
    float videolen;
    public:
        CWHVideo(string s, float r,float vl):CWH(s,r){
                videolen = vl;
        }
        void display(){
            cout<<"This video with title "<<title<<"\n";
            cout<<"Ratings: "<<rating<<endl;
            cout<<"Lengt of the video is : "<<videolen<<endl;
        }
};
class CWHText: public CWH{
    int words;
    public:
    CWHText(string s, float r, int wc):CWH(s,r){
        words = wc;
    }
    void display(){
        cout<<"This text with title "<<title<<"\n";
        cout<<"Ratings: "<<rating<<endl;
        cout<<"No of word in the text is "<<words<<endl;

    }
};
int main () {
    // char* title = new char[30];
    string title;
    float rating,vlen;
    int words;
    //
    title = "OOPs tutorial in c++";
    vlen = 12.34;
    rating =4.87;
    words = 344;
    CWHVideo oopsVideo(title, rating,vlen);
    // oopsVideo.display();
    CWHText oopstxt(title, rating ,words);
    // oopstxt.display();

    CWH* tuts[2];
    tuts[0]=&oopsVideo;
    tuts[1]=&oopstxt;

    tuts[0]->display();
    tuts[1]->display();
    // if we dont use virtual in the CWH class then base class display will run
    
    return 0 ;
}

/*
    Rules for virtual function
    1. They canot be static
    2. They are accesed by object pointers
    3. Virtual functons can be friend of another class
    4. A virtual function in base class might not be used
    5. if A virtual function defined in a base class, there is no neccesity of redefining it in the derived class
*/