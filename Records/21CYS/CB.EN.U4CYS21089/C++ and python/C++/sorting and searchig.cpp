#include<iostream>
using namespace std ;

class Sort {
    public:
    int n;

    void arrlen(int a){
        n = a;
    }

    int A[100];
    void inputs(){
        cout << "value of n = " << n << endl;
        for(int i=0;i<n;i++){   
            cin>>A[i];
        }
    }

    void print(){
        for(int i=0;i<n;i++){
            cout<<A[i]<<" ";
        }
    }


    void sort(){
        int temp=0;
        for(int i = 0; i<n; i++) {
            for(int j = i+1; j<n; j++)
            {
                if(A[j] < A[i]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp; }
            }
        }

        for(int i=0;i<n;i++) {
            cout << A[i] << " ";
        }
    }

    void search(){
        int k;
        cout << "Enter element to search: ";
        cin >> k;
        
        for(int i=0;i<n;i++) {
            if(A[i] == k){
                cout << k << " is present at index " << i+1 << " in the Sorted array A ";
                // 4 is present at index 3 in the Sorted array A
                break;
            }
        }
    }
};


int main(){
    int a,b;
    Sort s;
    cin >> a;
    s.arrlen(a); 
    s.inputs();
    cout << "Enter your choice: "; 
    cin >> b; // 1, 2 and 3.
    if(b == 1){
       s.print();
    }
    else if(b == 2){
        s.sort();
    }
    else if(b == 3){
        s.search();
    }
    

}