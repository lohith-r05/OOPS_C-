/*
CONSTRUCTORS:
    -spl fn
    -called when object is created
    -name is same as class name
    -no return type

    -default constructor
    -parameterised constructor
    -copy constructor
*/

/*
THIS keyword:
    -used to reprent/differentiate class variables from parameters
    -'this' represents class's variables.
*/

/*
DESTRUCTORS:
    - called when object goes out of scope
    - keyword (~class_name)
    - used to remove any dynamically allocated memory spaces
*/

#include<bits/stdc++.h>
using namespace std;

class players {
private:
    int jersey_no;
    string name;
public:
    players(int jersey_no, string name) {
        this->jersey_no = jersey_no;
        this->name = name;
        cout << jersey_no << "->" << name << endl;
    }
    ~players(){ //dont get args
        cout << "called after all the things have been done" << endl;
    }
};

int main(){
    players one(45,"rohit");
    players two(77,"gill");
    players three(18,"virat");
    players four(63,"surya");
    players five(1,"rahul");
    players six(33,"hardik");
    players seven(7,"dhoni");
    players eight = seven; //copy constructors->has same values of dhoni.
}