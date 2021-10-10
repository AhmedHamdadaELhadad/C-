#include<iostream>
using namespace std;
int main (){
	int x,s=0,rem;
	cout<<"ENTER THE POSTIVE NUMBER \t";
	cin>>x;
	while(x!=0){	
rem=x%10;
s+=rem*rem*rem;
x=x/10;
}
if (s==x)
cout<<x<<"THE NUMBER IS ARMSTRONG";
else 
cout<<"THE NUMBER IS NOT ARMSTRONG";




}

	
 
