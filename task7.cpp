#include <iostream>
using namespace std;
main()
{
int mega_byte;
int kilo_byte;
int byte;
int bit;
int input;
mega_byte=1024;
kilo_byte=1024;
byte=8;
cout << "Enter value in mega-bytes: ";
cin >> input; 
bit=mega_byte*kilo_byte*byte*input;
cout << "Data in bits: "<< bit;

}