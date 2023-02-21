#include <iostream>
using namespace std;

int main()
{

    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl << endl;

    pair<int, pair<int, int>> q = {1, {2,3}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl << endl;

    pair<int, int> array[] = {{1,2}, {2,3}, {3,4}, {4,5}};
    cout << array[0].first << " " << array[0].second << endl;
    cout << array[1].first << " " << array[1].second << endl;
    cout << array[2].first << " " << array[2].second << endl;
    cout << array[3].first << " " << array[3].second << endl;
}