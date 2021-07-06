/*
* Written By  : Md Mahmodul Hasan Bin Zakir
* Version     : 1.0
* Date        :07/05/2021
* Instructor  :Professor Jie Wei
*/
#include<stdio.h>
#include<stdbool.h>

void search(int arr[][4], int m, int n, int x)
{
    int row = 5;
    int column = 4;
    
    int start = 0;
    int end = (row*column) -1;
    
    while ( start <= end )
        {
                // calculating the mid
                int mid  = (start + end )/2 ;
                int midX = mid / column;
                int midy = mid % column;
                // if we find the value
                if ( (arr [midX] [midy]) == x){
                    printf ("The value is in the column: %d  and row: %d \n", midy ,  midX);
                    return;
                }
                // incrementing the mid because the x is small
                if (( (arr [midX] [midy]) < x) ){
                    start = mid +1;
                }
                
                // decrementing the mid
               else{
                    end = mid -1;
                }
        }
    // if the array does have the value
    
    printf ("the value was not in the array. \n");
    
}
int main()
{
    // the value i am looking
    int x = 20;
    // declaring the array
  int arr[5][4] =    {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16},
                     {17, 18, 19, 20},
                  };

    // calling the fuction
    search(arr, 5, 4, x);
       
    
  return 0;
}
