#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 


int main () {
    int x;
    scanf("%d", &x);
    printf("   |");
    for (int i = 0; i < x; i++){
        int cislo = x-i;  
        printf("  %d  ", cislo);        
        for (int yoop = 0; yoop < cislo; yoop++){
            // printf("%d \n", cislo * yoop+1);
            // printf("%d \n", yoop+1);
            printf("_");
        }
    }
}
