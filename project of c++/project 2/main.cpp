#include <iostream>
#include <fstream>
#include <fstream> 
#include <string.h> 
using namespace std;char id[10];char f_name[30];char l_name[30];char email[30];char address[30];
void insert(){cin.ignore();cout<<"enter your id \n";cin.getline(id,10);
cout<<"enter your first name \n";cin.getline(f_name,30);cout<<"enter your last name \n";cin.getline(l_name,30);cout<<"enter your Email \n";cin.getline(email,30);
cout<<"enter your Address \n";cin.getline(address,30);bool flag=true;if(flag!=false){cout<<" \n if you want to save this record press 's' \n ";
cout<<" \n if you don`t want to save this record press 'n' \n";char t;cin>>t;if(t!='s'){flag=false;cout<<" \n undo \n";}else if (t!='n'){ flag=false;
cout<<" \n redo \n ";fstream ifile;ifile.open("ff.txt",ios::out|ios::app);ifile<<id<<'|'<<f_name<<'|'<<l_name<<'|'<<email<<'|'<<address<<'|';ifile .close();}}}
void search(){fstream ifile;ifile.open("ff.txt",ios::in);
char key[10];cout<<"enter the first name"<<endl;cin.ignore();cin.getline(key,30);cout<<" \n \tid\tf_name\tl_name\t  email\t\taddress \n";
	while(!ifile.eof()){ifile.getline(id,10,'|');ifile.getline(f_name,30,'|');ifile.getline(l_name,30,'|');ifile.getline(email,30,'|');
	ifile.getline(address,30,'|');if(strcmp(f_name,key)==0){cout<<" \n \t "<<id<<"\t"<<f_name<<"\t"<<l_name<<"\t"<<email<<"\t "<<address<<"\n";break;	}}}
void display(){fstream ifile;ifile.open("ff.txt",ios::in);
cout<<" \n \tid\tf_name\tl_name\t  email\t\taddress \n";while(!ifile.eof()){ifile.getline(id,10,'|');ifile.getline(f_name,30,'|');ifile.getline(l_name,30,'|');
ifile.getline(email,30,'|');ifile.getline(address,30,'|');cout<<" \n \t "<<id<<"\t"<<f_name<<"\t"<<l_name<<"\t"<<email<<"\t "<<address<<"\n";}}
void update(){fstream ifile;fstream ofile;ifile.open("ff.txt",ios::in);
ofile.open("ss.txt",ios::out);char key[30];cout<<"enter the first name"<<endl;cin.ignore();cin.getline(key,30);while(!ifile.eof()){ifile.getline(id,10,'|');
			ifile.getline(f_name,30,'|');ifile.getline(l_name,30,'|');ifile.getline(email,30,'|');ifile.getline(address,30,'|');if(strcmp(f_name,key)==0){
			cout<<" \n \tid\tf_name\tl_name\t  email\t\taddress \n";cout<<" \n \t "<<id<<"\t"<<f_name<<"\t"<<l_name<<"\t"<<email<<"\t "<<address<<"\n";
			cout<<"\n\t enter the new value of record \n ";cout<<"enter your id \n";cin.getline(id,10);
	cout<<"enter your first name \n";cin.getline(f_name,30);cout<<"enter your last name \n";cin.getline(l_name,30);cout<<"enter your email \n";
	cin.getline(email,30);cout<<"enter your address \n";cin.getline(address,30);ofile<<id<<'|'<<f_name<<'|'<<l_name<<'|'<<email<<'|'<<address<<'|';}else{
		ofile<<id<<'|'<<f_name<<'|'<<l_name<<'|'<<email<<'|'<<address<<'|';}}
			bool flag=true;if(flag!=false){cout<<" \n if you want to update any record press 'u' \n ";
	cout<<" \n if you don`t want to update any record press 'n' \n ";char t;cin>>t;if(t!='u'){flag =false;cout<<" \n undo \n";}else if(t!='n') {flag =false; 
cout<<" \n redo \n ";ofile.close();ifile.close();ifile.open("ff.txt",ios::out);ofile.open("ss.txt",ios::in);while(!ofile.eof())
	{ofile.getline(id,10,'|');ofile.getline(f_name,30,'|');ofile.getline(l_name,30,'|');ofile.getline(email,30,'|');ofile.getline(address,30,'|');
	ifile<<id<<'|'<<f_name<<'|'<<l_name<<'|'<<email<<'|'<<address<<'|';}ofile.close();ifile.close();remove("ss.txt");cout<<"done";}}}
void deleted(){fstream ifile;fstream ofile;ifile.open("ff.txt",ios::in);ofile.open("ss.txt",ios::out);char key[30];
cout<<"enter the first name"<<endl;cin.ignore();cin.getline(key,30);cout<<"\n\t enter to delete the  record \n ";while(!ifile.eof()){ifile.getline(id,10,'|');
	ifile.getline(f_name,30,'|');ifile.getline(l_name,30,'|');ifile.getline(email,30,'|');ifile.getline(address,30,'|');if(strcmp(f_name,key)==0){
			cout<<" \n \tid\tf_name\tl_name\t  email\t\taddress \n"; cout<<" \n \t "<<id<<"\t"<<f_name<<"\t"<<l_name<<"\t"<<email<<"\t "<<address<<"\n";
			continue;}else{ofile<<id<<'|'<<f_name<<'|'<<l_name<<'|'<<email<<'|'<<address<<'|';}}bool flag=true;if(flag!=false){
	    cout<<" \n if you want to delete the searched record press 'd' \n "; cout<<" \n if you don`t want to delete the searched record press 'n' \n ";
		  	char t; cin>>t; if(t!='d'){ flag =false;cout<<" \n undo \n";}else if(t!='n'){
		 flag=false;cout<<" \n redo \n ";ofile.close();ifile.close();ifile.open("ff.txt",ios::out);ofile.open("ss.txt",ios::in);while(!ofile.eof()){
		ofile.getline(id,10,'|');ofile.getline(f_name,30,'|');ofile.getline(l_name,30,'|');ofile.getline(email,30,'|');ofile.getline(address,30,'|');
		ifile<<id<<'|'<<f_name<<'|'<<l_name<<'|'<<email<<'|'<<address<<'|';}ofile.close();ifile.close();remove("ss.txt");}}cout<<"done";
}int main(){bool flag=true; while (flag){cout<< " insert : 1 \n search : 2 \n displayall :3 \n update : 4 \n delete : 5 \n write your choose";
		int c;cin>>c;switch (c){case 1:	insert();break;case 2 :search();break;case 3:display();
		break;case 4:update();break;case 5:deleted();default:cout<< " \n choose right number \n ";}cout<<"if you want to continue this program press 'y' \n ";
		cout<<" \n if you want to quit to te progrm press 'q' \n ";char f;cin>>f;if(f!='y'){flag =false;}else if(f=='q'){flag=false;}}}
