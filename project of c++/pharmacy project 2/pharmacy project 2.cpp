 #include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;
char name[25];
    char id[9];
    char Quantity[100];
    char price[100];

void insert_pharmacy()
{
  
 fstream pharmacy;
    pharmacy.open("pharmacy.txt",ios::app);
   	int j;
	    cin>>j;
    cout<<"\n name :"  ;
    cin.getline(name,25) ;
    cout<<"\n id :"  ;
    cin.getline(id,25);
    cout<<"\n Quantity :"  ;
    cin.getline(Quantity,25);
    cout<<"\n price :";
    cin.getline(price,100);

     
    pharmacy<<name<<'|'<<id<<'|'<< Quantity<<'|'<<price<<'\n';
    cout<<" done !! " ;
    pharmacy.close();
}

void search_pharmacy()
{

    fstream pharmacy;
    pharmacy.open("pharmacy.txt",ios::in);
    char name[25];
    char id[25];
    char Quantity[25];
    char price[25];
    char a[25];
    int x=0;
    cout<<"\n Enter your medicine`s name for searching:\n";
    cin.ignore();
    cin.getline(a,25);
    cout<<"  \n\t name \t id \t Quantity \t price \n ";
    while(!pharmacy.eof())
    {
        pharmacy.getline(name,25,'|');
        pharmacy.getline(id,25,'|');
        pharmacy.getline(Quantity,25);
        pharmacy.getline(price,25);

        if(strcmp(name,a)==0)
        {
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
    char name[25];
    char id[25];
    char Quantity[25];
    char price[25];

    fstream system ;
    system.open("system.txt",ios::in);
    cout<<"  \n\t name \t id \t Quantity \t price \n ";
    while(!system.eof())
    {
        system.getline(name,25,'|');
        system.getline(id,25,'|');
        system.getline(Quantity,25,'|');
        system.getline(price,25);
        cout<<"\n"<<setw(8)<<setiosflags(ios::left)<<setw(8)<<setiosflags(ios::left)<<name<<setw(8)<<setiosflags(ios::left)<<id<<setw(8)<<setiosflags(ios::left)<<Quantity<<setw(8)<<setiosflags(ios::left)<<price<<endl;
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
	cout<<"\n Enter your ID to update ";
	cin.getline(a,25);
	while (!system.eof()){
		system.getline(name,25,'|');
		system.getline(id,25,'|');
		system.getline(Quantity,25,'|');
		system.getline(price,25);
		if(strcmp(id,a)==0){
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
	 	cin.ignore();  //must dont use ignore
    fstream system;
    fstream temp;
    system.open("pharmacy.txt",ios::in);
    temp.open("temp.txt",ios::out);
     char a[25];
 //  may use  naumer code 142 here
     //must dont use ignore

    cout<<"\n\t Enter the ID to delet the data: ";
    cin.getline(a,25);
    while(!system.eof())
    {
           system.getline(id,25,'|');
        if(strcmp(id,a)==0)
        {
            continue;

        }
        else
        {
            temp<<"\n"<<setw(8)<<setiosflags(ios::left)<<name<<'|'<<setw(8)<<setiosflags(ios::left)<<id<<'|'<<setw(8)<<setiosflags(ios::left)<<Quantity<<'|'<<setw(8)<<setiosflags(ios::left)<<price<<endl;
        }
    }
    temp.close();
    system.close();
    system.open("pharmacy.txt",ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(name,25,'|');
        temp.getline(id,25,'|');
        temp.getline(Quantity,25,'|');
        temp.getline(price,25);
    }
    system<<name<<'|'<<id<<'|'<<Quantity<<'|'<<price<<'\n';

    temp.close();
    system.close();
    remove("temp.txt");
    cout<<"\n \t \t done \n";



}

int main()
{
    bool flag=true;
    while(flag)
    {

        cout<<" insert:1 \n search:2 \n display all :3 \n update :4 \n delete :5 \n Enter your choose :  \n "<<endl;
        int c;
        cin>>c;
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
            cout<<"\n choose right number \n ";

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
