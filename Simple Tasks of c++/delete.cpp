# include<iostream>
using namespace std ;
class a{
	private :
	int n;
	 public:
	 	a(){
	 	int x;
		 cin>>x;
		 n=x;
		 cout<<" num  "<<n<<endl;
		 }


	 a(int q) {
	 n=q;

	 cout<<" THIS DONE \n";
	 a a2;
}
	void print (){
		cout<< n<<"\n";
	}



	~a(){
	cout<<endl;
		cout<<" the lastest deleat  before  "<< endl<<"N=" <<n;


	}

};
int main (){
	a a1(11);
	a a5;
	a1.print();




}
