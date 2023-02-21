#include <iostream>
using namespace std;

class Complex
{
private:
    float real, img;

public:
    void input()
    {

        cin >> real >> img;
    }
    float getreal() { return real; }
    float getimg() { return img; }
    void Add(Complex, Complex);
    // void Add(Complex);
};
// void Complex :: Add(Complex A){
//     cout << this -> getreal() + A.getreal() << " + " ;                      // Here this -> getreal() or getreal() will give same value.
//     cout << '(' << this -> getimg() + A.getimg() << ')' << 'i';		    // Here this -> getimg() or getimg() will give same value.
// }

void Complex ::Add(Complex A, Complex B)
{
    cout << B.getreal() + A.getreal() << " + ";
    cout << '(' << B.getimg() + A.getimg() << ')' << 'i';
}

int main()
{
    Complex c[2];
    Complex K;
    for (int i = 0; i < 2; i++)
    {
        c[i].input();
    }
    // c[0].Add(c[1]);
    K.Add(c[0], c[1]);
}
