// Topic: Flow control
// Program: To check whether a number is positive, negative or zero
#include<iostream>
using namespace std;
int main() {
  int n;
cout << "Enter a number: ";
cin >> n;
if ( n > 0 ) {
cout << "Positve";
} else if ( n < 0 ) {
cout << "Negative";
} else {
cout << "Zero";
}
return 0;
}
