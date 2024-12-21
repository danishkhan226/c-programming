#include <stdio.h>
void printArray();
void printArray(int a[],int n){
    printf("Array before reverse is: ");
  for(int i =0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}
void reverseArray();
void reverseArray(int a[],int n){
    int *ptr = &a[n];
    printf("Array after reverse is: ");
    for(int i =0;i<n;i++){
        *ptr--;
        printf("%d ",*ptr);
    }
}  
int main(){
    int k;
    printf("enter the size of array: ");
    scanf("%d",&k);
    int arr[k];
    for(int i=0;i<k;i++){
        arr[i] = (i+1);
    }
    printArray(arr,k);
    reverseArray(arr,k);
    return 0;
}
