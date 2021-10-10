#include<iostream>
using namespace std ;

char chars[50];
int a=0;
 void count_and_index_the_number(char s[],char a);

int main(){
	FILE *myfile1;
	
	char read;
	std::string s;

	myfile1=fopen("arr.txt","r");
	
	while((read =getc(myfile1)) != -1){
		 	
		
		 chars[a]=read;
		 a++;	
	};


	
	fclose(myfile1);


	 char w='a';

count_and_index_the_number(chars,w);

}
 void  count_and_index_the_number(char s[],char a){
    int size =a;
  	int c=0;int in[a];
    int inn=0;
//	FILE *myfile;
	for(int i=0;i<a;i++){
		if (s[i]==a){
			c++;
			inn++;
			in[inn]=i+1;
		
		 
		}
		
	}
	in[0]=c;
	//myfile=fopen("out.dat","w");


 char ss=0;
 ss+=(char)c;
 cout<<"Number of occurrences:"<<" "<<in[0]<<" at positions" ;
	for(int i=1;i<inn+1;i++){
		if (in[i]!=0){
			cout<<in[i]<<",";
			
		
}
	}


}




