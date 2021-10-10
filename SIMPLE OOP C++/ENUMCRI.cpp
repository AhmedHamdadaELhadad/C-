# include<iostream>
using namespace std;
enum days{sat=1,sun,mon,tue,wed,thur,fri};
string d[7]={"sat","sun","mon","tue","wed","thu","fri"};
days q[7]={sat,sun,mon,tue,wed,thur,fri};
class week{
	
	 days a[7];
	 
	 public: 
	 void setday(days w[]){
	 	
	 	for (size_t i=0;i<7;i++)
	 		a[i]=w[i];
	 }
	 void print(){
	 	for(size_t i=0;i<7;i++)
	 	cout<<" THE DAY IS "<<d[i]<<" - "<<a[i]<<endl;
	 }
};
int main(){
	week g;
	g.setday(q);
	g.print();
	
	
}
