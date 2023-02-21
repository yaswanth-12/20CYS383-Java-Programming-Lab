#include <iostream>
using namespace std;

class A
{
private:
    int a = 10;

public:
    ~A()
    {
        cout << 11 << endl;
    }
    void getdata()
    {
        cout << a << endl;
    }
};

int main()
{
    A exp;
    //exp.getdata();
}