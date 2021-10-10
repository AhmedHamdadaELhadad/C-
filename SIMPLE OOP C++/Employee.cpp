# include<iostream>
using namespace std ;
class Employee{
	
	string frist_name;
	string 	last_name;
	int monthly_salary;
	public: 
	Employee(string f,string l,int ms){
	frist_name=f;
	last_name=l;
	if(ms>0){
	
	monthly_salary=ms;	
else 
monthly_salary=0;

	}
}
void set_frist (string a){

	frist_name=a;
}
int get_last(){
	
	cour<<"THE LAST	 NAME =  ";
	return last_name;
}
void set_last(string q) 
{

	last_name=q;
}
int get_frist(){
	
	cour<<"THE FRIST NAME =  ";
	return frist_name;
}

int set_monthly_salary(int x){


	monthly_salary=x;
}
int monthly_salary(){
	
//	cout<<"THE MONTHLY SALARY  =  "<<monthly_salary<<endl;
	
	return monthly_salary;
}



};
int main(){
	Employee a1( ahmed ,hamad,1000);
		Employee a2( mohmed ,hamad,1000);
	cout<<" the salary yearly  is "<<a2.monthly_salary()*12;
	cout<< "the 10 precent rasied"<<(a2.monthly_salary()*12)*(a2.monthly_salary()*12)+(10/100);

	
	
	
	
	
}
