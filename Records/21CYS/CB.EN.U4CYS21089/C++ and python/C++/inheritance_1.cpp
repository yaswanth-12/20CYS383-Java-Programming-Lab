#include <iostream>
using namespace std;

class A
{
private:
    int z;

public:
    int x;

protected:
    int y;
};
class B : public A
{ // public inheritannce.
    // x stays public.
    // y stays protected.
    // z is not accessiable in this class.
};

class C : private A
{ // private inheritannce.
    // x becomes private.
    // y becomes private.
    // z is not accessiable in this class.
};

class D : protected A
{ // protect inheritance.
    // x becomes protected.
    // y becomes protected.
    // z is not accessiable in this class.
};

int main()
{
}