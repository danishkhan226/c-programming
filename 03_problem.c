#include <stdio.h>
int main(){
    int arr[10];
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i =0;i<10;i++){
        arr[i] = (i+1)*n;
        printf("the value of %d X %d is: %d\n",n,i+1,arr[i]);
    }
    return 0;
}