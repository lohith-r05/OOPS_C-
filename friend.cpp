#include<bits/stdc++.h>
using namespace std;

class player {
    private:
        string name;
        int j_no;
    public:
        player(string n, int j) : name(n), j_no(j){};
        friend void cricbuzz(player p);
};

void cricbuzz(player x){
    cout<<x.name<<"->"<<x.j_no;
}

int main(){
    player p1("rohit",45);
    cricbuzz(p1);
}