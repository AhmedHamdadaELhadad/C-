#include<bits/stdc++.h>
using namespace std;
bool cmp(int s,int f){ //base the second after frist
if(s>f)
return true;	
	
}
int main(){
	char s[]="15774";
  //from frist to end
  sort(s,s+6,cmp);
	printf("%S",s);
	
	return 0;
	
}
