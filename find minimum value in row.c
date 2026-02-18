#include <stdio.h>
int main() {
    int a[3][3] = {
        {1, 5, 3},
        {9, 2, 6},
        {4, 8, 7}
    };
    int row = 1;   // choose the row (0, 1, or 2)
    int min = a[row][0];
    for (int i = 1; i < 3; i++) {
        if (a[row][i] < min) {
            min = a[row][i];
        }
    }
    printf("Minimum value in row %d is %d", row, min);
    return 0;
}
