/*
A pure virtual function makes it so the base class can not be instantiated, and the derived classes are forced to define these functions before they can be instantiated. This helps ensure the derived classes do not forget to redefine functions that the base class was expecting them to.

*/



#include <iostream>
using namespace std;

class Shape {
public:
// Pure virtual function declared
virtual int Area() = 0;
// Function to set width.
void setWidth(int w) {
width = w;
}
// Function to set height.
void setHeight(int h) {
height = h;
}
protected:
int width;
int height;
};

//A rectangle is a shape & it inherits shape.
class Rectangle: public Shape {
public:
// The implementation for Area is specific to 
// a rectangle.
int Area() { 
return (width * height); 
}
};

// A triangle is a shape; it inherits shape.
class Triangle: public Shape {
public:
//Triangle uses the same Area function but 
//implements it to return area of a triangle.
int Area() { 
return (width * height)/2; 
}
};

//Main function
int main()
{

//Shape S; If you uncomment this statement program will indicate that an error has occurred.

Rectangle R; Triangle T; R.setWidth(5); 
R.setHeight(10); T.setWidth(20); T.setHeight(8);
cout << "\nThe area of the rectangle is: " << R.Area(); 
cout << "\nThe area of the triangle is: " << T.Area();
}

/*
The area of the rectangle is: 50
The area of the triangle is: 80
*/