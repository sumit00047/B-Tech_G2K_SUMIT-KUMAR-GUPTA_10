#include <stdio.h>

int main() {
    int n;
    printf("Enter the order of matrices (n): ");
    scanf("%d", &n);
    
    int a[n][n], b[n][n], add[n][n], mul[n][n];
    
    
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    
    
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    
  
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            add[i][j] = a[i][j] + b[i][j];
    
    // Matrix Multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mul[i][j] = 0;
            for (int k = 0; k < n; k++)
                mul[i][j] += a[i][k] * b[k][j];
        }
    }
    
    
    printf("\nMatrix Addition:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", add[i][j]);
        printf("\n");
    }
    
   
    printf("\nMatrix Multiplication:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }
    
    return 0;
}
