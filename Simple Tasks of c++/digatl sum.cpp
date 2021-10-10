#include<iostream>
using namespace std;
int sum (int n){
    if (n==0)
    return 0;
        return (n%10 +sum(n/10));
    }
    int main(){
        
        int n1;
        cin>>n1;
        int theresult=sum(n1);
        cout<<"the sum of digitalnumder"<<n1<<theresult<<endl;
        return 0;
        }
