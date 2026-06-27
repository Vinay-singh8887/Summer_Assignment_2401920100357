#include <iostream>
using namespace std;

class Test {
public:
    virtual int square(int x) = 0;
};

class Arithmetic : public Test {
public:
    int square(int x) override {
        return x * x;
    }
};

class ToTestInt {
public:
    void display() {
        Arithmetic obj;
        cout << "Square of 5 = " << obj.square(5) << endl;
    }
};

int main() {
    ToTestInt t;
    t.display();
    return 0;
}