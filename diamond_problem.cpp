#include<bits/stdc++.h>
using namespace std;

class A {
    public:
    void display() {
        cout << "display" << endl;
    }
};

class B : virtual public A {
    //some operations ....
};

class C : virtual public A {
    //some operations ....
};

class D : public B, public C {
    //some operations ....
};

int main() {
    D d;
    // d.display(); // This would cause an error due to ambiguity
    // To resolve the ambiguity, we can use virtual inheritance or explicitly specify which base class's method to call.
    d.display(); // This will work due to virtual inheritance
}