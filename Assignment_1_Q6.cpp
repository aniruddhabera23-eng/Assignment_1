#include <stdio.h>

int isSortedAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSortedAscending(arr, n)) {
        printf("Array is sorted in ascending order.\n");
    } else {
        printf("Array is NOT sorted in ascending order.\n");
    }

    return 0;
}