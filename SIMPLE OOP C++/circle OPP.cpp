# include<iostream>
using namespace std; 
class circle{
	private :
		double r;
		public :
			circle (){
				r=10;

}
		//	circle(double ar){
		//		r=ar;
		//	}

			void setradius(double r){
			this ->	r=r;
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
	//a.setradius(10);
	cout<<"area ="<<a.area()<<"\n";
	cout<<"radius="<<a.getradius();
}
	
	
