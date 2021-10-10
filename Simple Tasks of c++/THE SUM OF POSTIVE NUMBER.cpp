# include <iostream>
using namespace std;
int main(){
int x=1,s=0;
while(x>0){
	cout<<"ENTER NUMDER ";
	cin>>x;
	if (x<1)
	break;
	if(x%3==0)
	s+=x;
}
cout<<"THE SUM OF MOUDLES OF 3 = "<<s<<"\n";
}
