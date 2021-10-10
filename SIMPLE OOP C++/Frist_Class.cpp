# include<iostream>
using namespace std;
class Frist_Class{
	private : 
	int m;
	public :
		void putdata(){
			cout<<"ENTER THE vaule: ";
			cin>>m;
		}
	void display(){
		
		cout<<" m="<<m<<endl;
	}
	void setnum(int a){
		m=a;
	}
};
int main(){
	Frist_Class a1;
	Frist_Class a2;
	a1.putdata();
	a1	.display();
	a2.setnum(99);
	a2.display();
	return 0;
}
