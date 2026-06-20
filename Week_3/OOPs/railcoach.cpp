#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

 
class Compartment {
public:
    virtual string notice() = 0;   
    virtual ~Compartment() {}
};

 
class FirstClass : public Compartment {
public:
    string notice() override {
        return "First Class Compartment";
    }
};

class Ladies : public Compartment {
public:
    string notice() override {
        return "Ladies Compartment";
    }
};

class General : public Compartment {
public:
    string notice() override {
        return "General Compartment";
    }
};

class Luggage : public Compartment {
public:
    string notice() override {
        return "Luggage Compartment";
    }
};

int main() {
    srand(time(0));

    Compartment* compartments[10];

    for (int i = 0; i < 10; i++) {
        int randomNum = rand() % 4 + 1;  

        switch (randomNum) {
            case 1:
                compartments[i] = new FirstClass();
                break;
            case 2:
                compartments[i] = new Ladies();
                break;
            case 3:
                compartments[i] = new General();
                break;
            case 4:
                compartments[i] = new Luggage();
                break;
        }
    }

    cout << "Compartment Notices:\n";

    for (int i = 0; i < 10; i++) {
        cout << compartments[i]->notice() << endl;
    }

 
    for (int i = 0; i < 10; i++) {
        delete compartments[i];
    }

    return 0;
}