#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 
// #include <cstdlib>


int main () {
    int N;
    printf("Enter size of array to create\n");
    scanf("%d", &N);

    for (int k = 0; k < 1000; k++){
        int *A = (int*) malloc(N * sizeof(int));
        if (NULL == A) {
            printf("OS didnt gave emory. Exit...\n");
            exit(1);
        }
        for (int i = 0; i < N; i++)
            A[i] = i; 

        
        free(A);
    }
    
    printf("Array A successfule created!\n");   
    // system("pause");

}
