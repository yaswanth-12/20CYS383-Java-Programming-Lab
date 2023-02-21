#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={23,364,23,56,78};
    sort(a,a+5);
    for(int i=0; i<5; i++) {
    cout << a[i] << " ";
    }
    return 0;
}