#include <stdio.h>
#include<iostram>
using namespace std;

int fun(){
   
   int c, first, last, middle, n, search, array[100];
 
   cout<<"Enter number of elements";
   cin>>n;
 
   cout<<"Enter d integers\n" ,n;
 
   for (c = 0; c < n; c++)
      cin<<array[c]);
 
    cout<<"Enter value to find\n";
   cin>>search;
 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
        cout<<" found at location %d.\n", search, middle+1;
         retrun -1;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      cout<<"Not found! %d isn't present in the list.\n", search;
 
   return 0;  
}
}
int main(){
    
  int fun;  
return 0;    
    }


