#include <stdio.h>
int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = &array[1];
    printf("the element at address %u is: %d",ptr+2,*ptr+2);
    return 0;
}