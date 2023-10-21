#include <iostream>
using namespace std;
int main()
{
	float fh,cl;
	int choice;
	cout<<"         "<<"TEMPERATURE CONVERTER\n";
	cout<<"          "<<"CHOOSE AN OPTION\n";
	cout<<"    "<<"1. CONVERT FAHRENHEIT TO CELSIUS\n";
	cout<<"    "<<"2. CONVERT CELSIUS TO FAHRENHEIT\n";
	cout<<"       "<<"ENTER YOUR CHOICE(1/2):";
	cin>>choice;
	switch (choice)
	{
		case 1:
			cout<<"    "<<"Enter temperature in Fahrenheit:";
			cin>>fh; 
			cl=(fh-32)*5/9;
			cout<<"    "<<cl<<" "<<"Degree Celsius";
			break;
		case 2:
			cout<<"    "<<"Enter temperature in Celsius:";
			cin>>cl; 
			fh=(cl*9/5)+32;
			cout<<"     "<<fh<<" "<<"Degree Fahrenheit";
			break;
		default: 
		      cout<<"        "<<"INVALID CHOICE!";	
	return 0;	
	}
}