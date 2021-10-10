# include<iostream>
using namespace std;
int main(){
	char a[5]="abcd"; char s[5];
	int n=strlen(a);
	
	for (int i=0;i<n;i++)
	{ for(int w=i;w<n;w++)
	for(int k=i;k<=w;k++)
		cout<<s[k]<<endl;
		
		
	}
	
	
}
