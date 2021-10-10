#include<iostream>
using namespace std;
int man_value(int num1,int num2);
void getdata();
int main(){
	getdata();
}
void getdata(){
	int sum;
	int num1,num2;
	cout<<"enternumber1\n";
	cin>>num1;
	cout<<"enternumber2\n";
	cin>>num2;
	int resurt=man_value(num1,num2);
	cout<<"largernumber="<<resurt;
}
int man_value(int num1,int num2){
	int larger;
	if(num1>num2)
	larger=num1;
	else
	larger=num2;
	return larger;
}
