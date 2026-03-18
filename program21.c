#include <stdio.h>

int main()
{
    int n;
    
    // Take the number of elements from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];  // Declare array of size n
    
    // Take array elements from the user
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Calculate the sum
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    // Display the result
    printf("\nSum of all elements = %d\n", sum);
    
    return 0;
}
