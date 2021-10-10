#include<iostream>
using namespace std;
int main()
{
int uppercase=0,lowercase=0;
char a[12]="ICpcMenOFiA";
for(int i=0 ; i<11 ; i++)
{if(a[i]>='A' &&a[i]<='Z')
{

uppercase+=1;
}
else
{
lowercase+=1;
}

}
cout<<"uppercase ="<<uppercase<<" , "<<"lowercase ="<<lowercase<<endl;

}
