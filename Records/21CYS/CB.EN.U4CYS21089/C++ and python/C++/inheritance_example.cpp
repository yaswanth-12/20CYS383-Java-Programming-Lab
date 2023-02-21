#include <iostream>
using namespace std;

class A
{
private:
    int z = 500;

public:
    int x = 300;

protected:
    int y = 400;
    int getPVT()
    {
        return z;
    }
};
class B : public A
{ // public inheritannce.
    // x stays public.
    // y stays protected.
    // z is not accessiable in this class.
public:
    void get_y()
    {
        cout << y;
    }
    void get_z()
    {
        cout << getPVT();
    }
};

class C : private A
{ // private inheritannce.
    // x becomes private.
    // y becomes private.
    // z is not accessiable in this class.
public:
    void get_x_y()
    {
        cout << x << " " << y;
    }
    void get_z()
    {
        cout << getPVT();
    }
};

class D : protected A
{ // protect inheritance.
    // x becomes protected.
    // y becomes protected.
    // z is not accessiable in this class.
public:
    void get_x_y()
    {
        cout << x << " " << y;
    }
    void get_z()
    {
        cout << getPVT();
    }
};

int main()
{
    B qwe;
    C asd;
    D zxc;
    cout << qwe.x << " ";
    qwe.get_z();
    cout << " ";
    qwe.get_y();
    cout << endl;

    asd.get_x_y();
    cout << " ";
    asd.get_z();

    cout << endl;
    zxc.get_x_y();
    cout << " ";
    zxc.get_z();
    cout << endl;
}