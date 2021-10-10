#include<iostream.h>
#include <stdio.h>

#define size 3 // Matrix size

int main()
{
    int A[size][size];
    int row, col, sum = 0;

    /* Input elements in matrix from user */
    
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            cin>> A[row][col];
        }
    }

    /* Calculate sum of elements of each row of matrix */
    for(row=0; row<size; row++)
    {
        sum1 = 0;
        for(col=0; col<size; col++)
        {
            sum1 += A[row][col];
        }

        cout<<"Sum of elements of Row  =", row+1, sum1;
    }
    
    /* Find sum of elements of each columns of matrix */ 
    for(row=0; row<size; row++)
    {
        sum2 = 0;
        for(col=0; col<size; col++)
        {
            sum2 += A[col][row];
        }

        cout<<"Sum of elements of Column  = ", row+1, sum2;
    }
 
    return 0;
    
    
    if (sum1=sum2);
    cout<<"this is amagic matrax";
    
}

