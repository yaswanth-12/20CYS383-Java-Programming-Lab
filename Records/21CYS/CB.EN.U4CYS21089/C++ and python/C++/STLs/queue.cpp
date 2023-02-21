#include <queue>
#include <bits/stdc++.h>
#include <iterator>
using namespace std;
int main() {

    queue<string> s;
    // stack<string> s;
    s.push("Y");
    s.push("A");
    s.push("S");
    s.push("W");
    s.push("A");
    s.push("N");
    s.push("T");
    s.push("H");

    cout << "size of stack: " << s.size() << endl;

    while (!s.empty()) {
        cout << s.front() ;
        // cout << s.top() ;
        s.pop();
    }
    cout << endl;
    cout << "size of stack: " << s.size() << endl;
}