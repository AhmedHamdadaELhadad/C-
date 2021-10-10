# include<iostream>
using namespace std;
class greak_book{
	private: 
	string name;
	public:
		void set (string a ){
		
		name=a;	
			
		}
	string get (){
		
		 //cout<<name;
	return name;
	}
};
	int main(){
	greak_book a1;
	a1.set("ahmed");
cout<<a1.get();	
	}
	
	

