#include <iostream>
using namespace std;

void swap(int *a, int *b) {  // Call by reference.
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
void swap1(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
*/

int main() {
    int a,b;
    cin >> a >> b;
    swap(&a, &b);
    cout << a << " " << b << endl;
    swap1(a, b); 
    cout << a << " " << b << endl;
}