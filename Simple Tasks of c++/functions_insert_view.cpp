#include<iostream>
#include<string>
#include<fstream>

using namespace std;
void insert();
void view();
void ser_name(string n);
int main(){

int v; string na;
cout<<"to insert press 1\n";
cout<<"to get data press 2\n";
cout<<"insert 3 for serach\n";
cin>>v;
 switch(v){
 	case 1:
 		insert();
 		break;
 		case 2:
 		view();
 		break;
 		case 3:
 			{
 				cout<<"inter name";
 				cin>>na;
			  			ser_name(na);
 			break;
 		}
default:
cout<<"no char choise";	

 }


}
    // Insert new Record - record fileds is name & age.
    void insert()
    {
	
    fstream file;
    file.open("Store.txt",ios::app|ios::in);

    string name, age;
    char loop;
    do{
        cout<<"Enter your Name : ";
        cin>>name;

        cout<<"Enter your Age : ";
        cin>>age;

        file<<name<<"|";
        file<<age<<"\n";

        cout<<"Enter Y or y to add new records - Any Char to exit";
        cin>>loop;
    }while(loop=='Y' || loop=='y');
    
}
    //Get all data from the file
    void view(){
    	
	
    fstream file;
	file.open("Store.txt",ios::app|ios::in);

    string name,age;

    while(true){
        getline(file,name,'|');
        getline(file,age,'\n');
        
        if(file.eof())
            break;
        cout<<name<<" - "<<age<<endl;
    }
}

void ser_name(string n){
	fstream file;
	  file.open("Store.txt",ios::app|ios::in);
 

    string name,age;
    
    while(! file.eof())
{

        getline(file,name,'|');
        if(n.compare(name) == 0)
        {
        	cout<<"fouuuuuuuuuuuuuund\n";
        	cout<<name<<"-";
                getline(file,age,'\n');
	        	cout<<age;
	        	               // getline(file,salary,'|');
	        	               // cout<<salary<<"-";


		}
		
		
    }
   // cout< "not foundddddddddddd\n";
}
