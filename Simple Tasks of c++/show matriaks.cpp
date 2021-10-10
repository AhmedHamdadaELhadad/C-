#include<iostream>
using namespace std;
int main(){
	int x,y,z,q;
		cin>>x>>y>>z>>q;
	int w[2][2]={{x,y},{z,q}};
	cout<<endl;
	for(int i=0;i<2;i++){
		for(int c=0;c<2;c++){
			cout<<w[c][i]<<"\t";
		}
		cout<<endl;
	}
	if(x<q&&y<q&&z<q)
	cout<<"The largest is: "<<q;
	else if(x<z&&y<z&&q<z)
	cout<<"The largest is: "<<z;
	else if(x<y&&z<y&&q<y)
	cout<<"The largest is: "<<y;
	else
	cout<<"The largest is: "<<x;
}
