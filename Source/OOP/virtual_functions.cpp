#include <iostream>
using namespace std;

class Instrument {
    public:
        virtual void MakeSound(){
            cout << "Instrument is playing...\n";
        }
};


class Accordion: public Instrument {
    public:
        void MakeSound(){
            cout << "Accordion is playing...\n";
        }

};

int main() {

    //Instrument i1;
    //i1.MakeSound();
    Instrument *i1 = new Accordion();
    i1->MakeSound();
    return 0;
}