# include<iostream>
# include<algorithm>
# include<assert.h>     // this funcution speacial in found 2 mixmum 
using namespace std;
int get2mix(int array[],int size){
assert(size>=2);
int fristmax=array[0],secondmax=array[1];
if(secondmax>fristmax)	
	swap(fristmax,secondmax);
	for(int i=2;i<size;i++){ //1
		if(array[i]>fristmax)
		{ //2
		fristmax=secondmax;
		fristmax=array[i];	
	}//2
		else if(array[i]>secondmax)
		secondmax=array[i];
		else;
	} //1
	return fristmax,secondmax;
    
	
} 

int main(){
	const int size=5;
	int arr[size]={100,6,9,8,5};
	cout<<get2mix(arr,size)<<"\n\n";
	return 0;
}
