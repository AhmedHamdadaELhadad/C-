#include<iostream>
using namespace std;
int main(){
	int a[2][2] , b[2][2] , h , i , sum[2][2] , z , o;
	cout <<"please enter the number of row and colunms of matrix\n";
	cin >> h >> i;
	cout <<"please enter the elements of frist matrix\n";
	for( z=0 ; z<h ; z++ )
	for( o=0 ;o<i ; o++ )
	cin >> a[z][o];
	cout <<"please enter the slement of sound mateix\n";
	for( z=0 ; z<h ; z++ )
	for( o=0 ;o<i ; o++ )
		cin >>b[z][o];
      
		for( z=0 ; z<h ; z++ )
	for( o=0 ;o<i ; o++ )
	
	sum[z][o]=a[z][o]+b[z][o];
	
	cout<<"sum of matrices=\n";
	
	for( z=0 ; z<h ; z++ ){
	for( o=0 ;o<i ; o++ )
	cout<<sum[z][o]<<"\t";
	cout<<endl;}
	
	
	
	

	return 0;
}
