//  Qs_2.c
//  
//
//  Created by md zakir on 7/4/21.
/*
* Written By  : Md Mahmodul Hasan Bin Zakir
* Version     : 1.0
* Date        :07/05/2021
* Instructor  :Professor Jie Wei
*/
#include <stdio.h>

int rem( int a[],int end , int begin);

int main(){
    
    
    int arr[] = { 1,2,3,4,5,6,6};

    int size = sizeof(arr)/ sizeof(arr[0]);
    int x = rem( arr,size,0 );
    printf ("The value is: %d \n", x);
    
}

int rem( int a[], int end, int begin){
    
    
    int mid = (end - begin)/2;
    
    if ((a[mid] == a[mid-1] || a[mid] == a[mid+1])){
          return a[mid];
        }
           
    
    else {
        rem (a, mid, begin);
        rem ( a, end ,mid+1);
    }
    
}
