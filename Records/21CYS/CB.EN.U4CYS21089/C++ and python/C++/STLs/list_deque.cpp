#include <bits/stdc++.h>
#include <list>
#include <vector>
#include <iterator>
using namespace std;

int main()
{

    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(30);
    l.push_front(40);
    l.emplace_front();

    for (list<int>::iterator j = l.begin(); j != l.end(); ++j)
    {
        cout << *j << " ";
    }

    l.pop_back();
    l.pop_front();

    cout << endl;

    for (list<int>::iterator j = l.begin(); j != l.end(); ++j)
    // for(auto it : l)    
        {
        cout << *j << " ";
    }
}