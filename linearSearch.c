#include <stdio.h>

int linearSearch(int arr[], int n, int x){
    int i;
    for(i = 0; i<n; i++){
        if(arr[i] == x) return i;
    }
    return -1;
}

int main(){
    int arr[]= {5, 4, 3, 6, 8};
    int x;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<5; i++){
        printf("%d, ",arr[i]);
    }
    printf("\nInput the number you want to search: ");
    scanf("%d", &x);

    int result = linearSearch(arr, n, x);
    if(result == -1){
        printf("The number you are searching for doesn't exist\n");
    }else{
        printf("The number you are searching for exist at index %d\n", result);
    }
    return 0;
}