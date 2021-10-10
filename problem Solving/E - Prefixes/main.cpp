#include <bits/stdc++.h>>

using namespace std;


int main(){

     int n;
    cin>>n;
    string str;
    cin>>str;
    int k=0;
    for(int i=0;i<n;i+=2)
    {
        if((str[i]=='a' && str[i+1]=='b')||(str[i]=='b'&& str[i+1]=='a'))
            continue;
        else
        {
            k++;
            if(str[i]==str[i+1] && str[i]=='a')
                str[i]='b';
            else if(str[i]==str[i+1] && str[i]=='b')
                str[i]='a';
        }
    }
    cout<<k<<endl<<str;
    return 0;
}
