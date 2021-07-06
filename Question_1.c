#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    FILE *fp, *fpr;
    fp = fopen("test.txt" , "r");
   
    
    char c;
    char arr[17];
    int count = 0;
  
    
    if (fp == NULL ||fpr == NULL ) {
        printf("can not find the file \n");
        exit(0);
    }
    else {
        
    }
    
   
    if (count == 0 ){
        remove("test.txt");
    }
    fclose(fp);
    
    
}
