#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip> //for the setw
using namespace std;

void insert_pharmacy()
{
    char name[30];
    char id[18];
    char Quantity[10];
    char price[10];     // any price will change to 100
    fstream pharmacy; //not understood
    pharmacy.open("pharmacy.txt",ios::app); //ios::app 3lshan tkktb bltrteb el awl 7aga hea 22dm 7aga mn 8eraha el trteb hetsh2lb
    cin.ignore(); //lw shlnaha msh hebd2 mn el name
    cout<<"  name :"  ;
    cin.getline(name,30); //hea gomlt cin bn3l ze mention ll array lw bdlnahom httbdl amakn el t5zeen
    cout<<"\n id :"  ;
    cin.getline(id,18);
    cout<<"\n Quantity :"  ;
    cin.getline(Quantity,10);
    cout<<"\n price :";
    cin.getline(price,10);
    pharmacy<<name<<'|'<<id<<'|'<<Quantity<<'|'<<price<<'\n'; //da elshakl el bet3ml print fe el file
    cout<<" done !! " ;
    pharmacy.close();
}

void search_pharmacy()
{

    fstream pharmacy;
    pharmacy.open("pharmacy.txt",ios::in);
    char name[30];
    char id[18];
    char Quantity[10];
    char price[10];
    char a[30];
    int x=0;
    cout<<"\n Enter your medicine`s name for searching:\n";
    cin.ignore();
    cin.getline(a,30);
    while(!pharmacy.eof())
    {

        pharmacy.getline(name,30,'|');
        pharmacy.getline(id,18,'|');
        pharmacy.getline(Quantity,10);
        pharmacy.getline(price,10);

        if(strcmp(name,a)==0)
        {
        	cout<<"found"<<endl;
        	cout<<"\n"<<setw(8)<<setiosflags(ios::left)<<"name"<<setw(8)<<setiosflags(ios::left)<<"id"<<setw(8)<<setiosflags(ios::left)<<"Quantity"<<setw(8)<<setiosflags(ios::left)<<"price"<<endl;
            cout<<"\n"<<setw(8)<<setiosflags(ios::left)<<name<<setw(8)<<setiosflags(ios::left)<<id<<setw(8)<<setiosflags(ios::left)<<Quantity<<setw(8)<<setiosflags(ios::left)<<price<<endl;
            x=1;
            break ;

        }
    }

    if(x==0)
    {
        cout<<"\n not found !!!!\n";

}}
void display_all()
{
    char name[30];
    char id[18];
    char Quantity[10];
    char price[10];

    fstream pharmacy ;
    pharmacy.open("pharmacy.txt",ios::in);
    cout<<"  \n\t name \t id \t Quantity \t price \n ";
    while(!pharmacy.eof())
    {
        pharmacy.getline(name,30,'|');
        pharmacy.getline(id,18,'|');
        pharmacy.getline(Quantity,10,'|');
        pharmacy.getline(price,10);
        cout<<"\n\t"<<setw(8)<<setiosflags(ios::left)<<setw(8)<<setiosflags(ios::left)<<name<<setw(8)<<setiosflags(ios::left)<<id<<setw(8)<<setiosflags(ios::left)<<Quantity<<setw(8)<<setiosflags(ios::left)<<price<<endl;
    }
}
void update_pharmacy()
{
	fstream system;
	fstream temp ;
	system.open("pharmacy.txt",ios::in);
	temp.open("temp.txt",ios::out);
	char name[25];
	char id[25];
	char Quantity[25];
	char price[25];
	char a[25];
	cin.ignore();
	cout<<"\n Enter your Quantity to update ";
	cin.getline(a,25);
	while (!system.eof()){
		system.getline(name,25,'|');
		system.getline(id,25,'|');
		system.getline(Quantity,25,'|');
		system.getline(price,25);
		if(strcmp(Quantity,a)==0){
			cout<<"\n Found !!! \n Enter the new value\n";
			cout<<"\n name :";
			cin.getline(name,25);
			cout<<"\n id :";
			cin.getline(id,25);
			cout<<"\n Quantity :";
			cin.getline(Quantity,25);
			cout<<"\n price :";
			cin.getline(price,25);
			temp<<"\n"<<setw(8)<<setiosflags(ios::left)<<name<<'|'<<setw(8)<<setiosflags(ios::left)<<id<<'|'<<setw(8)<<setiosflags(ios::left)<<Quantity<<'|'<<setw(8)<<setiosflags(ios::left)<<price<<endl;
		}
		else{

			temp<<"\n"<<setw(8)<<setiosflags(ios::left)<<name<<'|'<<setw(8)<<setiosflags(ios::left)<<id<<'|'<<setw(8)<<setiosflags(ios::left)<<Quantity<<'|'<<setw(8)<<setiosflags(ios::left)<<price<<endl;

		}
	}
		temp.close();
		system.close();
	while(!temp.eof()){
		system.open("pharmacy.txt",ios::out);
		temp.open ("temp.txt",ios::in);
		temp.getline(name,25,'|');
        temp.getline(id,25,'|');
		temp.getline(Quantity,25,'|');
		temp.getline(price,25);
		system<<"\n"<<setw(8)<<setiosflags(ios::left)<<name<<'|'<<setw(8)<<setiosflags(ios::left)<<id<<'|'<<setw(8)<<setiosflags(ios::left)<<Quantity<<'|'<<setw(8)<<setiosflags(ios::left)<<price<<endl;
		}
	temp.close();
	system.close();
	remove("temp.txt");
	cout<<"done !!!\n";
	}

void delete_pharmacy()
{

    fstream system;
    fstream temp   ("temp.txt");
      int flag=false;
    char name[25];
    char id[25];
    char Quantity[25];
    char price[25];
    char a[25];
    system.open("pharmacy.txt",ios::in);
    temp.open("temp.txt",ios::out);
  cin.ignore();
    cout<<"\n\t Enter the ID to update the data: ";
    cin.getline(a,25);
    while(!system.eof())
    {
        system.getline(name,25,'|');
        system.getline(id,25,'|');
        system.getline(Quantity,25,'|');
        system.getline(price,25);

        if(strcmp(id,a)==0)
        {
		flag=true;
        }
        else
        {
            temp<<name<<"|"<<id<<"|"<<Quantity<<"|"<<price<<"\n" ;
			}
        }

    temp.close();
    system.close();
    	if (flag!=true){
    	cout<<"NOTFOUND \n";

		}
			else{

		cout<<"THE RECORD HAS DELETED\n";
		}
    remove("pharmacy.txt");
	rename("temp.txt","pharmacy.txt");
}

int main()
{
	int c;

    bool flag=true;
    while(flag)
    {

        cout<<" 1:insert \n 2:search \n 3:display all  \n 4:update  \n 5:delete  \n Enter your choose :  \n "<<endl;

        cin>>c;
        cout<<"\n";
        switch(c)
        {
        case 1:
            insert_pharmacy();
            break;
        case 2:
            search_pharmacy();
            break;
        case 3:
            display_all();
            break ;
        case 4:
            update_pharmacy();
            break ;
        case 5:
            delete_pharmacy();
            break;
        default:
            cout<<c<<" IS NOT A VAILD \n ";
			break;

        }

	    cout<<"if you want to continue press 'y' \n";
	    char f ;
        cin>>f;
        if(f!='y')
        {
            flag=false ;
        }

    }
    return 0;
}
