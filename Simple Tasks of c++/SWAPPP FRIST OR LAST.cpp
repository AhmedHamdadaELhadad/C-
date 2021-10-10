#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int a,s,d,frist,last,swap,n;
cout<<"ENTER THE NUMDER TO SWAP FRIST AND LAST \n ";
cin>>n;
for (int i=10;i<=n;i=i*10){
	if (d=n/i)
	s++;
	if (d<10)
	break;
}
frist=n/pow(10,s);
last=n%10;
a=frist *pow(10,s);
d=n%a;
n=d/10;
swap=last*pow(10,s)+(n*10+frist);
cout<<"THE SWAP OF NUBER \n"<<swap;

return 0;
}
