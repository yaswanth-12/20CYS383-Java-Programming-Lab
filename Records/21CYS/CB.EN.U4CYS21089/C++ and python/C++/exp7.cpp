// #include<iostream>
// using namespace std; 
// int main()
// {    
// cout << "Size of char : " << sizeof(char) << " byte" << endl;    
// cout << "Size of int : " << sizeof(int) << " bytes" << endl;    
// cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;    
// cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;    cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << endl;    
// cout << "Size of unsigned long int : " << sizeof(unsigned int) << " bytes" << endl;    
// cout << "Size of float : " << sizeof(float) << " bytes" <<endl;    
// cout << "Size of double : " << sizeof(double) << " bytes" << endl;    
// cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" <<endl;        
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main ()
// {
// // Defining and initializing some variables of char type
// char first = 'A';
// char second = 65;
// char third = 'B';
// char fourth = 66;
// // Printing values
// cout << "Value of first: " << first << endl;
// cout << "Value of second: " << second << endl;
// cout << "Value of third: " << third << endl;
// cout << "Value of fourth: " << fourth << endl;
// return 0;}

// #include <iostream>
// using namespace std;
// #include <iomanip> 
// int main(){	
// cout << 5.0 << '\n';	
// cout << 6.7f << '\n';	
// cout << 9876543.21f << '\n';
// cout << 9.87654321f << '\n';    
// cout << 987.654321f << '\n';    
// cout << 987654.321f << '\n';    
// cout << 9876543.21f << '\n';    
// cout << 0.0000987654321f << '\n';    
// cout << setprecision(16) ;
// cout << "=================================================================" << endl; 
// cout << 9.87654321f << '\n';    
// cout << 987.654321f << '\n';    
// cout << 987654.321f << '\n';    
// cout << 9876543.21f << '\n';    
// cout << 0.0000987654321f << '\n';    

// }

// #include <iostream>
// using namespace std;
// int main ()
// {int y = 32.34;
// cout << y ;
// return 0;}

// #include <iostream>
// using namespace std;
// int main (){
// int x = 32;
// int y = 78;
// char x1=32;
// char y1=78;
// int z = x + y;
// cout << z<<endl;
// char p=x1+y1;
// cout<<p<<endl;
// return 0;}

// #include <iostream>
// using namespace std;
// int main (){
// bool truth = true;
// bool lie = false;
// bool result = truth + lie;
// cout << result;
// return 0;}

// #include <iostream>
// using namespace std; 
// int main(){    
// double zero {0.0};    
// double posinf { 5.0 / zero }; // positive infinity    
// cout << posinf << '\n';     
// double neginf { -5.0 / zero }; // negative infinity    
// cout << neginf << '\n';     
// // not a number (mathematically invalid)
// double nan { zero / zero }; 
// cout << nan << '\n';     
// return 0;}

#include <iostream>
using namespace std;
int main()
{    
char ch{97}; 
cout << ch << endl;   
int i(ch); // assign the value of ch to an integer    
cout << i; // print the integer value    
return 0;
}
