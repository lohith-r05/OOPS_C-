#include<bits/stdc++.h>
using namespace std;

class base {
    public:
        virtual void display() = 0; //constructor initilased to 0 is pure virtual function
        // This makes base an abstract class.
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

int main() {
    base* b;
    derived_1 d1;
    
    // b=&d1;
    // b->display();
   
}

/*
    -Pure virtual functions are used to create abstract classes in C++.
    -An abstract class cannot be instantiated, 
      and it is meant to be a base class for other classes.
    -A pure virtual function is declared by assigning 0 
      to the function declaration in the base class.
    -Derived classes must provide an 
      implementation for the pure virtual function.
    -If a derived class does not implement the pure virtual function,
      it also becomes an abstract class and cannot be instantiated.
*/