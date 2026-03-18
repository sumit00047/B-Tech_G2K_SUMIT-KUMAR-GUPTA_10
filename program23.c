#include <stdio.h>

int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[] = {45, 23, 89, 12, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Minimum element: %d\n", findMin(arr, n));
    printf("Maximum element: %d\n", findMax(arr, n));
    
    return 0;
}
