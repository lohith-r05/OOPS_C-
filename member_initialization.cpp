/* 

// types of  onstructors and member initialization in C++.

IF DATA USED IN PRIVATE IS CONST: eg: 

class Player {
private:
    const string name; // const member variable
public:
    // Constructor with member initializer list
    Player(const string& playerName) : name(playerName) {
        cout << "Player created: " << name << endl;
    }
};

* here name is assigned or initialized with playerName in the member initializer list.
  This is necessary beacuse const member variables must be initialized at the time of 
  their creation and cannot be assigned a value later in the constructor body.

* Beacuse whenever a constructor is called, a default parameterized constructor is 
  called.

* it is also used in other cases like when we have to initialize reference variables
  or when we want to use the same variable name as the class member variable.
  -> int& x;
  .
  .
  .
  .


*/
#include <bits/stdc++.h>
using namespace std;
class Player {
private:
    string name;
public:
    // Default constructor
    Player() : name("Unknown") {
        cout << "Default Player created: " << name << endl;
    }
    // Parameterized constructor
    Player(const string& playerName) : name(playerName) {
        cout << "Parameterized Player created: " << name << endl;
    }
    // Copy constructor
    Player(const Player& other) : name(other.name) {
        cout << "Copy Player created: " << name << endl;
    }
    // Move constructor
    Player(Player&& other) noexcept : name(std::move(other.name)) {
        cout << "Move Player created: " << name << endl;
    }

    // move constructor is used to transfer ownership of resources from one object to another.
    // Destructor
    ~Player() {
        cout << "Player destroyed: " << name << endl;
    }
    // Constructor with member initializer list
    Player(const string& playerName) : name(playerName) {
        cout << "Player created: " << name << endl;
    }

    // Function to display player's name
    void display() const {
        cout << "Player's name: " << name << endl;
    }
};
