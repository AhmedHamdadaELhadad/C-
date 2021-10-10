# include<iostream>
using namespace std;

class account{
	private :
		int d1;
		public:
			
	account(int a){
		if (d1<0)cout<<"erro";
		else
		d1=a;
	}
	void cridet(int s){
		d1+=s;
	}
	void debit (int q){
		if (q>d1)
		cout<<"amount > blance";
		else 
		d1-=q;
	}
	int get_blance(){
		return d1;
	}
	
};
int main(){
account x(1000);
x.cridet(500);
x.debit(200);
cout<<x.get_blance();
	
	
	
}
