#include <iostream>
using namespace std;

class Triangle
{
private:
    int l, b;

public:
    Triangle()
    {
        l = 2;
        b = 7;
    }
    Triangle(const Triangle &chr) // const means source will not change.
    {
        l = chr.l;
        b = chr.b;
    }
    Triangle(int x, int y)
    {
        l = x;
        b = y;
    }
    void read() { cout << l << " " << b << endl; }
};
int main()
{
    Triangle T(10,20);
    T.read();
    return 0;
}