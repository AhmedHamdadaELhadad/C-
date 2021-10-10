# include<iostream>
using namespace std;
int insert(int array[],int size){ //void
	for(int i=1;i<size;++i){
	int cpy=array[i];
	int ss=i-1;
	for( ;ss>=0;--ss){
		if (array[ss]<cpy)
		break;
		array[ss+1]=array[ss];
			}
		
		array[ss+1]=cpy;	
		
	}
	return array [ss];
}
int main (){
	const int size=5;
	int a[size]={6,65,69,85,44};
	cout<<insert(a,size);
		return 0;

}
