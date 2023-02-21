#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char str[100]; //= "John is from USA.";
  char ch;
  cin >> str;
  cout << "The lowercase version of \"" << str << "\" is ";

  for (int i = 0; i < strlen(str); i++)
  {

    // convert str[i] to lowercase
    ch = tolower(str[i]);

    cout << ch;
  }

  return 0;
}