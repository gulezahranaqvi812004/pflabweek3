#include <iostream>
using namespace std;
main()
{
string name;
float matric_marks;
float inter_marks;
float ecat_marks;
float matric_percentage;
float inter_percentage;
float ecat_percentage;
float ecat_weight;
float matric_weight;
float inter_weight;
float aggregate;
float per_aggregate;
float ecat;
float inter;
float matric;
cout << "Enter your name: ";
cin >> name;
cout << "Enter your matric marks= ";
cin >> matric_marks;
cout << "Enter your inter marks= ";
cin >> inter_marks;
cout << "Enter your ecat marks= ";
cin >> ecat_marks;
ecat=ecat_marks/400;
matric=matric_marks/1100;
inter=inter_marks/550;
ecat_weight=(ecat*50)/100;
matric_weight=(matric*10)/100;
inter_weight=(inter*40)/100;
aggregate=(ecat_weight+inter_weight+matric_weight);
per_aggregate=aggregate*100;
cout << "aggregate= "<< per_aggregate;
}




