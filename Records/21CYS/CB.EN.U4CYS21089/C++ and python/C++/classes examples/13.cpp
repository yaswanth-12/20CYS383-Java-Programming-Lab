#include <iostream>
using namespace std;

class Base {
   public:
    void print1() {
        cout << "Base Function print1" << endl;
    }
    
    virtual void print2() {
        cout << "Base Function print2" << endl;
    }
    
};

class Derived : public Base {
   public:
    void print1() {
       cout << "Derived Function print1" << endl;
       Base::print1(); 
    }
    
    void print2() {
       cout << "Derived Function print1" << endl;
       Base::print2(); 
    }
};

int main() {
    Derived derived1;
    derived1.print1();
    cout<<"\n";
    derived1.Base::print1();
    cout<<"\n";
    derived1.print2();
    cout<<"\n";
    derived1.Base::print2();
    cout<<"\n";
    Base* ptr1 = &derived1;
    ptr1->print1();
    cout<<"\nThe effect of virtual keyword is here\t";
    ptr1->print2();
    cout<<"\n";
    Derived* ptr2 = &derived1;
    ptr2->print1();
    cout<<"\n";
    ptr2->print2();
    return 0;
}


/*

Derived Function print1
Base Function print1

Base Function print1

Derived Function print1
Base Function print2

Base Function print2

Base Function print1

The effect of virtual keyword is here   Derived Function print1
Base Function print2

Derived Function print1
Base Function print1

Derived Function print1
Base Function print2


*/