#include<iostream>
using namespace std;
class student{
	char name[20];
	int frist ,second,total,id;
	
	static int counter;
	public:
		static void print(){
			
			cout<<" print a static counter "<<counter<<" "; 
		}
	student(){
	 frist=second=total=0;	
		 //strcpy(name,"	noname");
		counter++;
		cout<<"number of student constructed"<<"  " <<counter<<endl;
		print();
	}	
};
int student::counter=0;

int main(){
	  student::print();

	
	cout<<"\nconstruct 2 object \n";
	
	student a1,a2;
	
	
	
	
}
