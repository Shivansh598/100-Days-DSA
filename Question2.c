//Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers.
// Shift remaining elements to the left.

#include<stdio.h>
int main(){
    int  n,pos;
    int arr[100];

    scanf("%d",&n);

    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&pos);

    int index=pos-1;

    for(int i =index;i<n;i++){
        arr[i]=arr[i+1];
    }

    n--;

    for(int i = 0 ; i<n;i++){
        printf("%d",arr[i]);
        if(i<n-1){
            printf(" ");
        }
    }
    printf("\n");

    return 0;

}