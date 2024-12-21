#include <stdio.h>
int main(){
    int array[10];
    for(int i =0;i<10;i++){
        array[i]= (i+1)*5;
        printf("the value of 5 X %d is: %d\n",i+1,array[i]);
    }
return 0;
}