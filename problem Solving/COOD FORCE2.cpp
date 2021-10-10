#include<iostream>
using namespace std;
int main(){
int n,n2,c=0;
	scanf("%d%d",&n,&n2);

int d[n][n];

for(int a=1;a<=n;a++){
for(int s=1;s<=n;s++){
 d[a][s]=a*s;
if (d[a][s]==n2)
c++;
}


} 
puts(c);






system("pause");

}

