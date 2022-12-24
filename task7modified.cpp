#include <iostream>
using namespace std;
main()
{
double mega_byte;
double kilo_byte;
double byte;
double bit;
double input; 
cout << "Enter value in bits: ";
cin >> input ;
byte=input/8;
cout << "Data in bytes=  " << byte << endl;
kilo_byte=input/(8*1024);
cout << "Data in Kilo-Bytes=  " << kilo_byte << endl;
mega_byte=input/(8*1024*1024);
cout << "Data in Mega-byte=  " <<mega_byte;

}