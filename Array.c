#include<stdio.h>
int main() {
    int n=10;
    int A[n] , item , index;
    for (int i=0; i<n ; i++) {
        printf("Enter the element %d: ",i );
        scanf("%d" , &A[i]);

    }
    printf("Enter the item to be deleted:");
    scanf("%d",&item);
    for (int i=0 ;i<n ; i++) {
        if (A[i] == item){
            index = i;
            break;
        }
    }
    for (int i=index ; i<n ; i++) {
        A[i] = A[i+1];
    }
    for (int i=0 ; i<n-1 ; i++) {
        printf("Array is %d\n"  , A[i]);
    }
}