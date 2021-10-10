#include<iostream>
using namespace std;
void swap(int x,int y);
void getdata();
int main(){
	getdata();
}
void getdata(){
int x,y;
cout<<"enter numbers\n";
cin>>x>>y;
swap(x,y);
cout<<"first number becomes "<<y<<"\n";	
cout<<"secend number becomes "<<x<<"\n";	
}
void swap(int x,int y){
int emputy;
emputy=x;
x=y;
y=emputy;
}

