#include<bits/stdc++.h>
using namespace std;

class base {
    public:
        virtual void display() {
            cout << "display base" << endl;
        }
};

class derived_1 : public base {
    public:
        void display() {
            cout << "display derived 1" << endl;
        }
};

class derived_2 : public base { //multiple inheritance
    public:
        void display() {
            cout << "display derived 2" << endl;
        }
};

int main(){
    base* b;

    //b points to base, derived_1, derived_2...

    // base b1;
    // b = &b1;

    // derived_1 d1;
    // b = &d1;

    // derived_2 d2;
    // b = &d2;

    b->display();
}

/*
Virtual functions allow us to achieve runtime polymorphism in C++. 
When a base class declares a function as virtual, 
  it tells the compiler to access any of its derived classes or itself..
  -> based on the type of object pointed to.
*/