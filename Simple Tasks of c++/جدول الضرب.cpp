#include<iostream>
using namespace std;
void multy();
int main(){
multy();	
}
void multy(){
	for(int r=1;r<=12;r++){
	for(int c=0;c<=12;c++)
	cout<<r<<"*"<<c<<"="<<r*c<<"\n";
	cout<<"******************\n";
}
}
