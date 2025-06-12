
// calsses and objects with function overloading...


#include<bits/stdc++.h>
using namespace std;

class players {
public:
    int jersey_no;
    string name;

    // void display(int emp_id) {
    //     cout << emp_id << "->" << name << endl;
    // }

    void display(int); //just a declaration, that it'll be written outside the class...

    void display() {
        cout << jersey_no << "->" << name << endl;
    }

    void display(string name) {
        cout << jersey_no << "->" << name << endl;
    }

    void display(int jersey_no, string name) {
        cout << jersey_no << "->" << name << endl;
    }
};

void players::display(int jersey_no){
    cout << jersey_no << "->" << name << endl;
}

int main() {
    players e; // object/instacnce.
    e.name = "dhoni";
    e.jersey_no = 7;
    e.display();
    // cout << e.emp_id << " " << e.name << endl;

    players j;
    string& jsname = j.name;
    jsname = "kohli";
    j.display(18);
    // cout << jsname;

    players x;
    x.display(77,"Gill");

    players z;
    z.jersey_no = 45;
    z.display("rohit");
}
