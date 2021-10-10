# include<iostream>
#include <math.h>
using namespace std;

int main(){
	double f,c;
	cout<<"PLESE ENTER THE DEGREE IN Fahrenheit  SHOULD grather than 32 \n";
	cin>>f;
	if (f<32)
    c=(-5/9)*(f-32);
	c=(5/9)*(f-32);
	cout<<"THE converts it to Celsius \n"<<c;

 return 0;
}

