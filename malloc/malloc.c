#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 

int main () {
    // int* x = NULL;
    
    // x = (int *) malloc(sizeof(int) );
    // // int y = 333;
    // // x =(int *) &y;
    // *x = 333;
    // printf("%d\n", *x);
    // free(()x);
    // *x = NULL;
    // printf("%d\n", *x);


    int *x =(int *) NULL;

    x =(int*) malloc(sizeof(int) );

    if (x != NULL) {
        *x = 333;
        printf("%d\n", *x);   
    }    
    printf("%d\n", *x);
    // free(x);
    // x=(int* )NULL;
    // printf("%p\n", &x);
    return 0;
}
