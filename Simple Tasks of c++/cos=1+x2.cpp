#include<iostream>
using namespace std;
float fun1(float x,float i){
int fa=1;
for(int z=1;z<=(i+1);z++){
fa=fa*(-1);
}
float v=fa;
return v;}
float fun2(float x,float i){
float fa;
if(i==1)
fa=1;
else{
fa=1;
for(int z=1;z<=(2*i-2);z++)
fa=fa*x;
}
float v=fa;
return v;
}
float fun3(float x,float i){
int fa;
if(i==1)
fa=1;
else{
fa=1;
for(int z=1;z<=(2*i-2);z++)
fa=fa*z;
}
int v=fa;
return v;
}
int main(){
float sum=0,x,n,i;
cout<<"Enter X:";
cin>>x;
cout<<"Enter N:";
cin>>n;
for(i=1;i<=n;i++){
sum=sum+((fun1(x,i)*fun2(x,i))/fun3(x,i));
}
cout<<"COS "<<x<<" = "<<sum;
}


