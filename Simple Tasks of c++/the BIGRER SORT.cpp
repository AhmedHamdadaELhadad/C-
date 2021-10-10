# include<bits/stdc++.h>
using namespace std;
bool cmp(char s,char f){
	if(s>f){
		retrun true;
	}
	return false;
}
int main 
(){
	char s[]="12695244";
	sort(s,s+6,cmp);
	printf("%s";s);

	
}
