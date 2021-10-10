# include<iostream>
using namespace std;
int main(){
	int s=0,c=0,x=1,ave;
	while(x>0){
		cout<<"ENTER THE NUMDER"<<endl;
		cin>>x;
		if(x<1)
		break;
		s+=x;
		c++;
		
	}
	ave=s/c;
	cout<<"THE AVEARAGE OF POSTIVE NUMDER : = "<<ave<<endl;
}
