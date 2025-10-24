#include <stdio.h>
int main() {
    int n;
    float a[3][3], det = 0;

    printf("Enter order of matrix (2 or 3): ");
    scanf("%d", &n);
    if (n == 2) {
        printf("Enter elements of 2x2 matrix:\n");
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                scanf("%f", &a[i][j]);

        det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);

        printf("Determinant = %.2f\n", det);
    }
    else if (n == 3) {
        printf("Enter elements of 3x3 matrix:\n");
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                scanf("%f", &a[i][j]);

        det = a[0][0] * ((a[1][1] * a[2][2]) - (a[1][2] * a[2][1]))
            - a[0][1] * ((a[1][0] * a[2][2]) - (a[1][2] * a[2][0]))
            + a[0][2] * ((a[1][0] * a[2][1]) - (a[1][1] * a[2][0]));

        printf("Determinant = %.2f\n", det);
    }
    else {
        printf("Only 2x2 and 3x3 matrices supported in this program.\n");
    }
    return 0;
}

