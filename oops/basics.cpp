#include<iostream>
using namespace std;

class student {

    private :
        int a, b, c;

    public:
        int d, e;

        void setdata(int a1, int b1, int c1);
        void getdata(){
            cout << "value of a is " << a << endl;
             cout << "value of b is " << b << endl;
             cout << "value of c is " << c << endl;
             cout << "value of d is " << d << endl;
             cout << "value of e is " << e << endl;
        }
};

void student :: setdata(int a1, int b1, int c1){

    a = a1;
    b = b1;
    c = c1;

}

int main(){

    student bhuwan;
    
    bhuwan.d = 50;
    bhuwan.e = 60;

    bhuwan.setdata(1,2,3);
    bhuwan.getdata();
  
}