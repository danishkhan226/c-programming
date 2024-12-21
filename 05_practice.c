#include <stdio.h>
int count_positive();
int count_postive(int a[],int n){
    int no_of_positive_integer =0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            no_of_positive_integer++;
        }
    }printf("\n");
        return no_of_positive_integer;
}
int count_negative();
int count_negative(int a[],int n){
    int no_of_negative_integer =0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            no_of_negative_integer++;
        }
    }
        return no_of_negative_integer;
}
int main(){
    int arr[10] = {-1,2,-3,4,-5,6,-7,8,-9,10};
    printf("The array is: ");
    for(int i =0;i<10;i++){
        printf("%d ",arr[i]);
    }printf("\n");
     printf("positive integers in the array: ");
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            printf("%d ", arr[i]);
        }
    }printf("\n");
     printf("Negative integers in the array: ");
    for (int i = 0; i < 10; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("the number of postive integer in array is: %d\n ",count_postive(arr,10));
    printf("the number of negative integer in array is: %d\n ",count_negative(arr,10));
    return 0;
}