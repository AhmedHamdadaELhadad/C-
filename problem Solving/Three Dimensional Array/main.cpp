#include <iostream>

using namespace std;

int main()
{  char test[2][2][2];
    char cfound;
    int indexi;
    int indexj;
    int indexk;
    bool f=true;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                 cout << "test[" << i << "][" << j << "][" << k << "] = " ;cin>>test[i][j][k];

            }
        }
    }

     cout<<"Search for one Char"<<endl ;
     cin>>cfound;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {



                if(test[i][j][k]==cfound){

                    indexi=i;
                    indexj=j;
                    indexk=k;
                    f=false;
                    break;
                }
                   else{f=true;}

            }
        }
    }


    if(f==true){
        cout<<"NOT FOUND THIS CHAR";}
        if(f==false){
            cout<<"YES FOUND in INDEX  ";
            cout<<"test[" <<indexi<<"]["<<indexj<<"]["<<indexk<<"]=";
             cout<<"PLEASES ENTER NEW CHAR "<<endl;
             cin>>test[indexi][indexj][indexk] ;
        }

    cout<<"FINALLY SHOW ALL MARTIX "<<endl;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << "test[" << i << "][" << j << "][" << k << "] = " << test[i][j][k] << endl;
            }
        }}


    return 0;
}
