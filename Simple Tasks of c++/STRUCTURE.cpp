# include<iostream>
using namespace std;
struct point{                                           //must write before main @ 
	float x,y;};
	int main(){
		char ch;        //this use to fasla ,
			point p1,p2,p3;                             // this called objiect p1 @
				cout<<"ENTER THE FRIST  POINT "<<endl;       //	cin>>p1.x,y,z
					cin>>p1.x>>ch>>p1.y;
						cout<<"ENTER THE second  POINT "<<endl;
								cin>>p2.x>>ch>>p2.y;
									p3.x =p1.x+p2.x;
									p3.y =p1.y+p2.y;
										cout<<"THE RESULT =("<<p3.x<<","<<p3.y<<")"<<endl;
											return 0 ;	
								//THIS PROGRAME 
	}
