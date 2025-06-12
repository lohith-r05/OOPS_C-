/*
    Abstraction =>
        1) access specifiers
            a) public
            b) private
            c) protected
        2) abstract classes
            a) pure virtual functions
            b) virtual functions
*/

// PURE VIRTUAL FUNCTIONS WITH DYNAMIC MEMORY ALLOCATION:

#include<bits/stdc++.h>
using namespace std;

class remote {
    public:
        virtual void on() = 0; // Pure virtual function.
};

class samsung_TV : public remote {
    public:
        void on() override { // Override the pure virtual function.
            cout << "Samsung TV is ON" << endl;
        }
};

class redmi_TV : public remote {
    public:
        void on() override { // Override the pure virtual function.
            cout << "Redmi TV is ON" << endl;
        }
};

int main() {
    remote* tv1 = new samsung_TV(); // Dynamic memory allocation for Samsung TV.
    remote* tv2 = new redmi_TV(); // Dynamic memory allocation for Redmi TV.

    tv1->on(); // Calls Samsung TV's on method.
    tv2->on(); // Calls Redmi TV's on method.

    delete tv1; // Free allocated memory.
    delete tv2; // Free allocated memory.

    return 0;
}