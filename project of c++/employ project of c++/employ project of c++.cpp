#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

/* suppose that function parameters :

array0 = number[] ;

array1= age[];

array2= name[];

array3= job[];

array4 = material_status[];

array5= bonus[];

array6= percent_bonus[];

array7= salary[];

array8 net_salary[];

array9= insured[];

*/


void get_data( int array0 [] , int array1 [] , string array2 [] , string array3 [] , string array4 [] , int size);

void set_data( string array3[] , float array5 [] , float array6[] , int size);

void set_bonus( float array5[] , float array6[] , float array7[] , float array8[] , int size);

void insurence( int array1[] , string array4[] , string array9[] , int size);

void print_monitor( int array0[],string array1[],int array2[],string array3[],string array4[],float array5[],float array6[],float array7[],float array8[],string array9[],int size);

void print_file( int array0[],string array1[],int array2[],string array3[],string array4[],float array5[],float array6[],float array7[],float array8[],string array9[],int size);

void search(bool choice );

void modify ();

void add();

void update (bool choice);

void add_file( int array0[],string array1[],int array2[],string array3[],string array4[],float array5[],float array6[],float array7[],float array8[],string array9[],int size);


int main()
{
	
	// Declare an arrays ;
	int size;
	int choose;
	
	cout<<"ENTER THE NUMBER OF  EMPLOYEES \n";
	cin>>size;
	int number [size] ;
	
	int age [size] ;

	string name [size] ;
	
	string job [size] ;

	string material_status [size] ;

	float percent_bonus [size] ;

	float bonus [size] ;
	
	float salary [size] ;
		
	float net_salary [size] ;
	
	string insured [size] ;
	
	bool choice;
	
	// Functions calling ;
	
	get_data(number , age , name , job , material_status , size);
	
	set_data(job , salary , percent_bonus , size);
	
	set_bonus(bonus , percent_bonus , salary , net_salary , size);
	
	insurence(age , material_status , insured , size);

	print_monitor(number , name , age , material_status , job , salary , percent_bonus , bonus , net_salary ,  insured ,size);
	
	print_file(number , name , age , material_status , job , salary , percent_bonus , bonus , net_salary ,  insured ,size); 
	
	cout<<"do you want to make any update or search for anything in the file,please choose a number (1: yes 2: no) (typing any other numbers  will end to reach the end of the program) \n";
	cin>>choose;
	if (choose==1)
	{
	for (int x=0;x<3;x++)
	{
	
	cout<<"Enter \n 1- '1' for search \n 2- '0' for update \n 3-press any other number to end program  \n";
	
	cin>>choice;
	
	if(choice==1)
	{
		search(choice);
	}
	else if (choice==0)
	{
	  update (choice);	
	}
		
	cout<<"do you to continue modifing or searching,please choose a number (1: yes 2:no) \n";
	cin>>choose;
	if(choose==1)
	{
		continue;
	}
	else
	{
		break;
	}
	
    }
	
    }
    else 
	   {
	    cout<<"THANKS FOR USING OUR THE PROGRAM :D \n";
       }

	
	return 0;

}


// This function to accept employeer,s data from user ;

void get_data( int array0 [] , int array1 [] , string array2 [] , string array3 [] , string array4 [] , int size){
	
	for (int i=0 ; i<size ; i++){
		
		
		cout<<"Enter data (number , age ,  name like (Ahmad_Madkour.....use for every space slash '_') , job , material status) for employee number "<<i+1<<endl;
			
		cin>>array0[i]>>array1[i]>>array2[i]>>array3[i]>>array4[i];
		
		
}
}
// This function complete employee data by setting emplyeer,s ( salary , percent of bonus ) depend on employeer,s job ;

void set_data( string array3[] , float array5 [] , float array6[] , int size){

	
	for (int i=0 ; i<size ; i++){
		
		
		// Condition statements to provide the employee,s salary and percent of bonus dependent on employee job ;
	
			
		if (array3[i] == "manager")
		{
		
		array5[i] = 5000 ;
		
		array6[i] = 0.15 ;
    	
    	}
    	
    	else if (array3[i] == "engineer")
		{
		
		array5[i] = 3500 ;
		
		array6[i] = 0.12 ;
    	
    	}
    	
    	else if (array3[i] == "worker")
		{
		
		array5[i] = 2000 ;
		
		array6[i] = 0.10 ;
    	
    	}
    	
    			else 
		{
		
		array5[i] = 1000 ;
		
		array6[i] = .088 ;
    	
    	}




	}
	
}

// This function set bonus and total of salary  for employeers by multiplie salary * percent ;

void set_bonus( float array5[] , float array6[] , float array7[] , float array8[] , int size){
	
	for (int i=0 ; i<size ; i++){
		
	    array5[i]= array6[i] * array7[i] ;
		
		
		array8[i] = array5[i] + array7[i] ;
		
		
	}
	
	
}

// This function to insure employee or no depend on age and material status ;

void insurence( int array1[] , string array4[] , string array9[] ,  int size){
	
	
	for(int i=0 ; i<size ; i++){
		
		// This is compound OR condition to set employee insured or no depend on material status and age ;  
		
		if((array4[i] == "married") || (array1[i] >= 30))
		
		array9[i] = "Insured   |  " ;
		
		else
		
		array9[i] = "Noninsured   |  " ;
		
		
	}
	
}

// This function to print employeer,s dota on monitor ;

void print_monitor( int array0[],string array1[],int array2[],string array3[],string array4[],float array5[],float array6[],float array7[],float array8[],string array9[],int size){
	
	cout<<"_____________________________________________________________________________________________________________________________________"<<endl;
	
	for (int i=0 ; i<size ; i++){
		
		
		cout<<i+1<<"-data of the employee number "<<i+1<<endl;
				
		cout<<" Employee number : "<<array0[i]<<endl;
		
		cout<<" Employee name : "<<array1[i]<<endl;
		
		cout<<" Employee age : "<<array2[i]<<endl;
		
		cout<<" Employee material status : "<<array3[i]<<endl;
		
		cout<<" Employee job : "<<array4[i]<<endl;
		
		cout<<" Employee salary : "<<array5[i]<<endl;
		
		cout<<" Percent of bonus : "<<array6[i]<<endl;
		
		cout<<" Employee bonus : "<<array7[i]<<endl;
		
		cout<<" Employee salary after incerement : "<<array8[i]<<endl;
		
		cout<<" Employee insurence status : "<<array9[i]<<endl;
		
		cout<<"________________________________________________________________________________________________________________________________________"<<endl;
		
		
	}
	
}

// This function to print employees data in file ;

void print_file( int array0[],string array1[],int array2[],string array3[],string array4[],float array5[],float array6[],float array7[],float array8[],string array9[],int size){

  ofstream output;
  
  output.open("Company,s Employee.txt");
  
  	for (int i=0 ; i<size ; i++)
	  {
		output<<array0[i]<<" | "<<array1[i]<<" | "<<array2[i]<<" | "<<array3[i]<<" | "<<array4[i]<<" | "<<array5[i]<<" | "<<array6[i]<<" | "<<array7[i]<<" | "<<array8[i]<<" | "<<array9[i]<<endl;	
	  }
output.close();
}

void add_file( int array0[],string array1[],int array2[],string array3[],string array4[],float array5[],float array6[],float array7[],float array8[],string array9[],int size)
{

  ofstream output;
  
  output.open("Company,s Employee.txt",std::ios_base::app); // app: putting it in the appended mode so i can write in the file without erasing anything
  
  	for (int i=0 ; i<size ; i++)
	  {
		output<<array0[i]<<" | "<<array1[i]<<" | "<<array2[i]<<" | "<<array3[i]<<" | "<<array4[i]<<" | "<<array5[i]<<" | "<<array6[i]<<" | "<<array7[i]<<" | "<<array8[i]<<" | "<<array9[i]<<endl;	
	  }
output.close();
}


void modify ()
{
	
string line,name,newline;
float salary, bouns,pob,sai;
int number,age;
cout<<"ENTER THE NAME YOU WISH TO MODIFY IN \n";
cin>>name;
cout<<"ENTER THE modification YOU WISH TO MODIFY IN \n";
cin>>newline;
ifstream read("Company,s Employee.txt");
ofstream temp("temp.txt");

while(!read.eof())
{ 
read>>line;
if(line!=name)
{
	temp<<line<<" ";
}
else
{
    temp<<line;
	temp<<newline<<" ";
}
	
}
read.close();
temp.close();
remove("Company,s Employee.txt");
rename("temp.txt","Company,s Employee.txt");
}

void add(int size)
{

	
	cout<<"ENTER THE NUMBER OF  EMPLOYEES YOU WANT TO ADD \n";
	cin>>size;
	int number [size] ;
	
	int age [size] ;

	string name [size] ;
	
	string job [size] ;

	string material_status [size] ;

	float percent_bonus [size] ;

	float bonus [size] ;
	
	float salary [size] ;
		
	float net_salary [size] ;
	
	string insured [size] ;
	
	bool choice;
	
	// Functions calling ;
	
	get_data(number , age , name , job , material_status , size);
	
	set_data(job , salary , percent_bonus , size);
	
	set_bonus(bonus , percent_bonus , salary , net_salary , size);
	
	insurence(age , material_status , insured , size);

	print_monitor(number , name , age , material_status , job , salary , percent_bonus , bonus , net_salary ,  insured ,size);
	
	add_file(number , name , age , material_status , job , salary , percent_bonus , bonus , net_salary ,  insured ,size);
	


}
void update (bool choice)
{
	string choose;
    int size;
	cout<<"Do you want to modify or add \n";
	cin>>choose;
	if (choose=="modify")
	{
		modify();
	}
	else if (choose=="add")
	{
		add(size);
	}


	
}
void search(bool choice )
{
string name,line;
ifstream read;
read.open("Company,s Employee.txt");

cout<<"ENTER THE NAME OF THE EMPLOYEE YOU WANT TO SERACH FOR HIS INFORMATIONS \n";
cin>>name;
while(!read.eof())
{
	read>>line;
	
	if(line==name) 
	
	{
		cout<<"HIS INFO: name , age ,  material status , job , salary  ,Percent of bonus, bonus, salary after incerement ,  insurence status  \n";
		cout<<line;
		getline(read,line);
		cout<<line<<endl;
    }

}

read.close();
}
		
