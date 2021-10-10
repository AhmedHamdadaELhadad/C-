# include<iostream>
using namespace std;
int prime ();
int main()
{
int a,s,flag=0;
a=prime();
for(int i=2;i<a/2;++i)
cout<<i<<"\t";
if (a%i==0){
	flag=1;
	break;
}
if (flag==1)
cout<<"THE NUMBER IS NOT PRIME :"<<a;
else 
cout<<"THE NUMBER IS PRIME :"<<a;
system("pause");
return 0;
int prime(){
	int n;
	cin>>n;
retrun n;
}






}
