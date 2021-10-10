#include <iostream>

using namespace std;
int main(){
       int result[5];
       int a[]={5,10,15,20,25};
       int b[]={15,20,25,30,35};
       for(int x=0;x<5;x++){
       result[x]=a[x]*b[x];
}
       for(int index=0;index<5;index++){
       cout<<result[index]<<endl;
     }

 return 0;
}


