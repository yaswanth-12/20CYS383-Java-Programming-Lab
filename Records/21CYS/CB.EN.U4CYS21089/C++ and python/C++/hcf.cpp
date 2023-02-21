#include<iostream>
using namespace std;

int main(){
    int a,b,hcf,temp;
    cin >> a;
    cin >> b;
    temp = min(a,b);
    for ( int i=1;i<=temp;i++){
        if((a%i==0) && (b%i==0)){
            hcf = i;
        }
    }
    cout << hcf;
    return 0;
}