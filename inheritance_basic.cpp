#include <iostream>
using namespace std;

class Player {
public:
    string name;
    int jerseyNumber;
    Player(string n, int j) : name(n), jerseyNumber(j) {}
    void displayPlayer() {
        cout << "Player Name: " << name << endl << "Jersey Number: " << jerseyNumber << endl;
    }
};

class Cricketer : public Player {
public:
    string role; 
    Cricketer(string n, int j, string r) : Player(n, j), role(r) {};
    void displayCricketer() {
        displayPlayer();  // Call base class function
        cout << "Role: " << role << endl;
    }
};

int main() {
    Cricketer c1("Rohit Sharma", 45, "Batsman");
    c1.displayCricketer();
    return 0;
}
