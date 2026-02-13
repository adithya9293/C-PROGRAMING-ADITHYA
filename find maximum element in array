#include <stdio.h>

int main() {
    int arr[] = {12, 45, 2, 89, 34, 67, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // 1. Initialize max with the first element
    int max = arr[0];

    // 2. Loop through the array to compare elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            // 3. Update max if a larger value is found
            max = arr[i];
        }
    }

    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
