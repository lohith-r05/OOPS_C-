#include<bits/stdc++.h>
using namespace std;

class A {
    public:
        void display() {
            cout << "display A" << endl;
        }
};

class B : public A {
    public:
        void display() {
            cout << "display B" << endl;
        }
};

int main(){
    B b;
    b.display(); // This will override display A...

    A a;
    a.display(); //This will run base class's display...
}