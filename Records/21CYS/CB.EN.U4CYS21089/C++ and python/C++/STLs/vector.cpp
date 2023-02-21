#include <iostream>
#include <vector>
#include <pair>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(10); // takes the value one into the vector(array)
    v.push_back(20);
    v.emplace_back(30); // this dynamically creates another slot into array and then puts '3' in the vector(array).
    int a;
    cin >> a;
    v.push_back(a);

    vector<pair<int, int>> vex; // pair type can also exist as vector.
    vex.push_back({1, 2});
    vex.push_back({2, 3});

    vector<int> p(5, 100); // this means {100,100,100,100,100} a array of 5 size with all instances as 100 is created.
    vector<int> p1(5);     // this creates {0,0,0,0,0} or the values can also be garbage it depends on the compiler.

    vector<int> p2(p); // this means the vector p1 is a basically a copy of p.

    /* Accessing values in a vector */

    // 1st way
    cout << v[0] << endl;
    cout << vex[0].first << endl;
    cout << v[0] << " " << v.at(0) << endl;
    cout << v.back() << endl;  // prints the last element in the vector
    cout << v.front() << endl; // prints the first element in the vector

    // 2nd way (using iterators)
    vector<int>::iterator it = v.begin(); // it is not the begining of the vector , example - vector = {1,2,3,4,5}. v.begin() points to '1'.
    it++;
    cout << *it << endl;
    it++;
    cout << *it << endl;
    it++;
    cout << *it << endl; // if try to access a element that is not in the vector, returns 0.

    // using for loops
    // method 1 (we know the size of the vector)
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // method 2 ( we dont know the size of vector)
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }

    // Erasing particular index elements in the vector.
    v.erase(v.begin() + 1); // this is pointing to the 2nd position of the vector.
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }

    v.erase(v.end() - 1);                  // This deletes the last position of the vector.
    v.erase(v.begin() + 1, v.begin() + 3); // this is to erase a set of elements. (start,end)
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
}
