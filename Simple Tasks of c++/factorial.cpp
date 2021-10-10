#include<iostream>
#include<cmath>
using namespace std;
void getdata();
int multy(int i,int number);
int main(){
	int i,number;
	multy(i,number);
	getdata();
}
void getdata(){
		int number,i;
cout<<"enter number\n";
cin>>number;
if(number>=0)
cout<<"factorial="<<multy(i,number);
else
cout<<"math Error\n";
}		
int multy(int i,int number){
	int fact=1;
	for(int i=1;i<=number;i++)
	fact=i*fact;
return fact;
}
