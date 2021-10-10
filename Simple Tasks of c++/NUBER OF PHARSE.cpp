#include <iostream> 
#include<conio.h>
using namespace std;
int main (){
	int charcounter=0;
	int c=1;
	char ch;
	cout <<"PLESE ENTER THE PHARSE";
	while((ch=getche())!='\r')
	{
		if(ch=="")
		 c=c+1;
		else
		charcounter=charcounter+1;
	}
	cout<<"\nwords ="<<c<<endl;
	cout<<"\n letter"<<charcounter<<endl;
	return 0;	
}
