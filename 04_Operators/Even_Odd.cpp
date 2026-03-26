// Topic: Operators
// Program: To check whether number is odd or even using modulus operator
#include<iostream>
using namespace std;
int main() {
  int num;
cout<< "Enter Number: " ;
cin >> num;

if ( num % 2 == 0 ) {
cout<< "Number is Even" ;
} else {
cout<< "Number is Odd" ;
}
return 0;
}
