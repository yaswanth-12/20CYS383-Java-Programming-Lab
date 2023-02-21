#include <iostream>
using namespace std;
class student
{
    int rollNo;
    char name[20];

public:
    void getData()
    {
        cin >> rollNo;
        cin >> name;
    }
    void putData()
    {
        cout << rollNo << " " << name;
    }
};

int main()
{
    student t;
    t.getData();
    t.putData();
}