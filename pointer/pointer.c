#include <stdio.h>
#include <stdlib.h> 

struct Abstract {
  int width, height;  
};

void calc (struct Abstract *obj);

int main() {
    struct Abstract squer = {5, 7};
    calc(&squer);

    int num = 5;
    int * pNum = &num;
    
    printf("%p\n", (void *) pNum);
    printf("%d\n", *pNum);
    printf("%p\n",(void *)  &num);

    int x;
    int *pX = &x;

    
    printf("%p\n", (void *) &x);
    printf("%d\n", *pX);
    printf("%d\n", x);
    printf("%p\n", (void *) pX);
    
    return 0;
}

void calc(struct Abstract *obj) {
    int res = obj->width * obj->height;
    printf("Результат: %d\n", res);
}
