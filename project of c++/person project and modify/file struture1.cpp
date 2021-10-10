#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
cahr id [8];
cahr name[30]
cahr address[30];
cahr age [7];
cahr salary [11];
char phone [11];
void insert(){
	cout<<="ENter Id:";
	cin>>id;
	cout<<="ENter name :";
	cin>>name;
	cout<<"ENter address:";
	cin>>address;
	cout<<"ENter age:";
	cin>>age;
	cout<<"ENter phone:";
	cin>>salary;	
	cout<<"ENter phone:";
	cin>>salary;
	 
	 ofstream myfile("employee.text",ios::app);
	 myfile <<id<<"|"<<name<<"|"<<address<<"|"<<age<<"|"<<salary<<phone;
	 myfile.close();
}
	void display{
	ifstream myfile("employee.text");
	while(!myfile.eof()){
		myfile.getline(id,8,'|');
		myfile.getline(name,31,'|');
		myfile.getline(address,31,'|');
		myfile.getline(age,8,'|');
		myfile.getline(salary,8,'|');
		myfile.getline(phone,12,'|');
		cout<<id<< "  "<<name<<"  "<<address<<" "<<age<<" "<<salary<<" "<<phone<<endl;

	}
	myfile.close();
	}
   
   void search(char key[30]){
	ifstream myfile("employee.text");
	while(!myfile.eof()){
		myfile.getline(id,8,'|');
		myfile.getline(name,31,'|');
		myfile.getline(address,31,'|');
		myfile.getline(age,8,'|');
		myfile.getline(salary,8,'|');
		myfile.getline(phone,12,'|');
		if(strcmp(address,key)==0)
		cout<<id<< "  "<<name<<"  "<<address<<" "<<age<<" "<<salary<<" "<<phone<<endl;

	}
	myfile.close();
	}
	void del(char key[11]){
	ofstream myfile("employeebac.txt");
	ifstream myfile("employee.text");
	while(!myfile.eof()){
		myfile.getline(id,8,'|');
		myfile.getline(name,31,'|');
		myfile.getline(address,31,'|');
		myfile.getline(age,8,'|');
		myfile.getline(salary,8,'|');
		myfile.getline(phone,12,'|');
		if(strcmp(address,key)==0) {
		}
		 else
		cout<<id<< "  "<<name<<"  "<<address<<" "<<age<<" "<<salary<<" "<<phone<<endl;

	}
	myfile.close();
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
