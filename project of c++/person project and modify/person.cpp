#include<iostream>
#include<stdio>
#include<fstream>
#include<string>
#include<conio>
class person{
	
	
	char usn[30];
	char name[30];
	char address[30];	
	char branch[30];
	char college[30];
	char buffer[30];
	pubilc:
		void input();
		void output();
		void pack();
		void unpack();
		void write();
};

void person ::input()
{
	cout<<"ENTER usn"<<endl;
	cin>>usn;
	cout<<"ENTER name"<<endl;
	cin>>name;
	cout<<"ENTER address"<<endl;
	cin>>address;
	cout<<"ENTER branch"<<endl;
	cin>>branch;
	cout<<"ENTER college"<<endl;
	cin>>college;
	cout<<"ENTER buffer"<<endl;
	cin>>buffer;
	
}
void person ::output()
{
	cout<<"usn";
	puts(usn);
	cout<<"address";
	puts(address);
	cout<<"name";
	puts(name);
	cout<<"branch";
	puts(branch);
	cout<<"college";
	puts(college);
	
}
void person ::pack()
{
	strcpy(buffer,usn);strcat(buffer,"|");
	strcpy(buffer,name);strcat(buffer,"|");
	strcpy(buffer,address);strcat(buffer,"|");
	strcpy(buffer,branch);strcat(buffer,"|");
	strcpy(buffer,college);strcat(buffer,"|");
	strcpy(buffer,usn);strcat(buffer,"|");
	while(strlen(buffer)<50)
	strcat(buffer,"*");
}
void person ::unpack()
{
	char *ptr=buffer;
	while(*ptr!='*')
	{
		if (*ptr=='|')
		*ptr++;
	}

	ptr=buffer;


	strcpy(usn,ptr);
	ptr=prt+strlem(ptr)+1;
	strcpy(name,ptr);
	ptr=prt+strlem(ptr)+1;	
	strcpy(address,ptr);









}


