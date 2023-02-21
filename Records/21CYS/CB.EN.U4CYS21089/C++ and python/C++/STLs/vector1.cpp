#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    
    vector<int> v2;
    v2.push_back(30);
    v2.push_back(40);
    
    v1.swap(v2);
    for(auto i : v1){
        cout << i << " ";
    }
    cout << endl;
    
    for(auto i = v2.begin(); i != v2.end(); i++){
        cout << *i << " ";
    }

    v1.clear(); // clear the whole vector
    cout  << v1.empty() << endl;
}
