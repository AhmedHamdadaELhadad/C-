#include <bits/stdc++.h>

using namespace std;

int main()
{




  srand((unsigned) time(0));

  int size;
  cout<<"Enter the size of Array:";
  cin>>size;
  int array[size];
     int n = sizeof(array) / sizeof(array[0]);
  for (int index = 0; index <size ; ++index) {
     array[index]= (rand() % 200) - 100;

  }
sort(array, array + n);

for (int index = 0; index <size ; ++index) {

    cout<<array[index]<<endl;

}


    return 0;
}
