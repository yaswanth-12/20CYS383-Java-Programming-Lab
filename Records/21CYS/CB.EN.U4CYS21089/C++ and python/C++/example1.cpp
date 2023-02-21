#include <iostream>
#include <string>
using namespace std;

class colourRectangle
{
private:
    string color;
    float leth;
    float brth;

public:
    colourRectangle(string str, float a, float b)
    {
        color = str;
        leth = a;
        brth = b;
    }
    void getArea()
    {
        cout << leth * brth;
    }
    void getColour()
    {
        cout << color;
    }
};

int main()
{
    colourRectangle r1("Red", 2, 3.5);
    cout << "Area: ";
    r1.getArea();
    cout << "   "
         << "Colour: ";
    r1.getColour();

    cout << endl;

    colourRectangle r2("blue", 2.987, 3.569);
    cout << "Area: ";
    r2.getArea();
    cout << "   "
         << "Colour: ";
    r2.getColour();
    cout << endl;
    return 0;
}