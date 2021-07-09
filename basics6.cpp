#include <iostream>
using namespace std;

//Inheritance
//Super Class
class Chef {
    public:
    void makeChicken(){
        cout << "The chef makes chicken" << endl;
    }
        void makeSalad(){
        cout << "The chef makes salad" << endl;
    }
        void makeStonks(){
        cout << "The chef makes stonks" << endl;
    }
};

//Sub Class
class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        void makeStonks(){
            cout << "The chef makes fresh stonks" << endl;
        }
};

int main(){

    Chef chef;
    chef.makeChicken();
    chef.makeStonks();


    ItalianChef italianChef;
    italianChef.makePasta();
    italianChef.makeStonks();

    return 0;
}