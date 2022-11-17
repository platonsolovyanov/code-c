#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 

int main () {
    int N;
    printf("Enter size of array to create\n");
    scanf("%d", &N);

    char *A = (char*) malloc(N);
    if (NULL == A) {
        printf("OS didnt gave emory. Exit...\n");
        exit(1);
    }

    for(int i = 0; i < N; i++)
        A[i] = i;

    printf("Array A successfule created!\n");   

    char *B = (char*) malloc(N);
    if (NULL == B) {
        printf("OS didnt gave emory. Exit...\n");
        exit(1);
    }

    for(int i = 0; i < N; i++)
        B[i] = i;

    printf("Array B successfule created!\n");    
}
