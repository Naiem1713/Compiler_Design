#include<iostream>
using namespace std;
bool isNumeric(string str) {
   for (int i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == false)
         return false; //when one non numeric value is found, return false
      return true;
}
int main() {
   string str;
   cout << "Enter a string: ";
   cin >> str;
   if (isNumeric(str))
      cout << "This input is Numeric" << endl;
   else
      cout << "This input is not numeric ";
    return 0;
}
