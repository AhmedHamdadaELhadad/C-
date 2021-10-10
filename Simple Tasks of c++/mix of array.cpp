# include<iostream>
using namespace std;
int main(){
	
	int a;
	
	cout<<"ENTER THE SIZE OF ARRAY";
	cin>>a; 
	int a1[a];
	int mix=0;
	for(int i=1;i<a;i++){
	cout<<"the value of number"<<i<<"in index";
		cin>>a1[i];
		if(a1[mix]==a1[i])
		mix=i;
	}	
	cout<<"postion of mix:"<<mix<<endl;
	
	
	
	
}
