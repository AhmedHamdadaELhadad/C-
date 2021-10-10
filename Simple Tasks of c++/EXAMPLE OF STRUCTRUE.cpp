# include<iostream>
using namespace std;
struct distance
{ int feet;
float inches;
};
int main ()
{
distance d1={24,10.2}; // same reconesie int , float
distance d2={35,2.6};
distance d3;
	d3.feet=d1.feet=d2.feet;
	d3.inches=d1.inches+d2.inches;
	
	
}
