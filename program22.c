#include <stdio.h>

int main() {
    int n;
    
    // Input the size of arrays
    printf("Enter the size of arrays: ");
    scanf("%d", &n);
    
    // Declare three arrays
    int array1[n];
    int array2[n];
    int result[n];
    
    // Input first array
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }
    
    // Input second array
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }
    
    // Calculate sum of corresponding elements and store in third array
    for (int i = 0; i < n; i++) {
        result[i] = array1[i] + array2[i];
    }
    
    // Print the results
    printf("\nArray 1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array1[i]);
    }
    
    printf("\nArray 2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array2[i]);
    }
    
    printf("\nSum of corresponding elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    
    printf("\n");
    return 0;
}
