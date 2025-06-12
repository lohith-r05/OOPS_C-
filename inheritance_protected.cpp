#include<bits/stdc++.h>
using namespace std;
 
class Player {
protected: //accessible to derived classes only.
    string name;
    int jerseyNumber;
public:
    Player(string n, int j) : name (n), jerseyNumber(j) {};
    void displayPlayer() {
        cout << "Player Name: " << name << endl;
        cout << "Jersey Number: " << jerseyNumber << endl;
    }
};

class Printing : Player {
public:
    Printing(string n, int j) : Player(n, j) {
        displayPlayer(); 
    }
};

int main(){
    Printing P ("Rohit Sharma", 45);
}