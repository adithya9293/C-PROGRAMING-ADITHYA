#include <stdio.h>
int main() {
    int a[3][3] = 
    {
        {1, 5, 3},
        {9, 2, 6},
        {4, 8, 7}
    };
    int row = 1; 
    int max = a[row][0];
    for (int i = 1; i < 3; i++) {
        if (a[row][i] > max) {
            max = a[row][i];
        }
    }
    printf("Maximum value in row %d is %d", row, max);
    return 0;
}
