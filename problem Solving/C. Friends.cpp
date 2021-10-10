#include<iostream> 
using namespace std; 
  
int main() 
{ 

int x,y,z;
cin>>x,y,z;
if (x>=0&&y>=0&&z>=0&&x<=100&&y<=100&&z<=100)
{
if(x<z&&x<y)
{
cout<<x;
if(y<z)
cout<<z;


	}
}
}


