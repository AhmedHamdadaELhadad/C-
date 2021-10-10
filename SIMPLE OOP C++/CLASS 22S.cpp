# include<iostream>
using namespace std; 
class circle{
	private :
		double r;
		public :
			circle (){
			r=10;

}
   //circle ():r(10){}          // THIS ANTHOR CONSTROCTOR

			circle(double ar){
				r=ar;
			}

			void setradius(double rr){
				r=rr;
			}
			double getradius(){
				return r;
			}
	double area();
	};
	
double 	circle::area(){
			return r*r*3.014;

}
	
	
	
int main(){
	
	circle a;
	a.setradius(5);
	cout<<"area ="<<a.area()<<"/n";
	cout<<"radius="<<a.getradius();
}
	
	
