#include <iostream>
using namespace std;

int main() {
    int m,n,temp,reverse=0;
    cin >> n;
    m = n;
    do{
        temp = n%10;
        n = n/10;
        reverse = reverse*10 + temp;
    }while (n != 0);

    cout << reverse << endl;
    if(m==reverse){
        cout << "p" << endl;
    }
    else{
        cout << "n" << endl;
    }
}