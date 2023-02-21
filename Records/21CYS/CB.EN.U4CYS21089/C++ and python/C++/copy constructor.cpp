/* Two Types of Copy Constructors 
 1.Default constructor (Shallow copy constructor).
 2. User defined constructor (Deep user-defined copy constructor). 
 
 Class Triangle, M=X
 To use copy constructor, you must use M(X)
 */

#include <iostream>
using namespace std;

class A {
    private:
        int x,y;
    public:
        A()
        { x= 5; y=6;}
        A(int a,int b)
        { x = a; y = b; }
        A(const A &a)
        { x = a.x; y = a.y; }  // Deep copy constructor.
        void print()
        { cout << x << " " << y << endl; }
};

int main() {
    A t1(10,20),t2; // here t1 is parameterized.
    t2 = t1; // Copy constructor.
    t1.print();
    t2.print();
    return 0;
}

