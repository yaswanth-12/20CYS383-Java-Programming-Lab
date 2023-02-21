#include<iostream>
using namespace std;

int main(){
    int a,b,lcm,temp;
    cin >> a;
    cin >> b;
    temp = a*b;
    for ( int i=1;i<=temp;i++){
        if((i%a==0) && (i%b==0)){
            lcm = i;
            break;
        }
    }
    cout << lcm;
    return 0;
}