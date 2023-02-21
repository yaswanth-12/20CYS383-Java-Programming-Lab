// single inheritance - useful for showing common attributes.

#include <iostream>
using namespace std;
class vehicle /* Base class {for common attributes}*/
{
    float price;

protected: /*( private attributes that can be inherited)*/
};
class car /*Deriverd class*/
{
    // we can inherit data from vechicle.
};
class bike /*Deriverd class*/
{
    // we can inherit data from vechicle.
};
int main()
{
}

/* Note:
1. The private attributes are not accessed from base class, so we need to use 'protected' access specifier to use the
attributes in the deriverd classes.
2. Protected attributes are the attributes that are priavte but can be accessed by deriverd classes.*/