#include <iostream>
using namespace std;

class A {
    // Base class.
    public:
    int x;
    void getdata(){
        cin >> x;
    }
};
/* Multi-level means it is only one chain, there will be not one class that gives two class. There is only one base class for a
sequence like a train. */
class B : public A {
    // It can be public, private, or protected.
    // Derived class from A.
    // Here it is a public inheritance.
    public:
    int y;
};

class C : public B {
    // It can be public, private, or protected.
    // Derived class from B.
    // Here it is a public inhertiance.
    public:
};

class D : public C {
    // It can be public, private, or protected.
    // Derived class from C.
    // Here it is a public inhertiance.
};

int main() {
    A qwe;
    B asd;
    C zxc;
    C iop;
    cout << asd.x << endl;
    cout << zxc.x << endl;
    cout << iop.x;

    return 0;
}