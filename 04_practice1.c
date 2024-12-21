#include <stdio.h>
void printArray();
void printArray(int a[], int n){
    for(int i =0;i<n;i++){
        printf("%d ",a[i]);
    }printf("\n");
}
void reverseArray();
void reverseArray(int a[],int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}
int main(){    //{0,1,2,3,4,5}index 
    int arr[6]= {1,2,3,4,5,6};
    printArray(arr,6);
    reverseArray(arr,6);
    printArray(arr,6);
    return 0;
}