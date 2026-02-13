#include <stdio.h>

int main() {
    int arr[] = {25, 14, 56, 15, 36, 8, 77};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // 1. Assume the first element is the minimum
    int min = arr[0];

    // 2. Iterate through the array starting from the second element
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            // 3. Update min if a smaller value is found
            min = arr[i];
        }
    }

    printf("The smallest element in the array is: %d\n", min);

    return 0;
}
