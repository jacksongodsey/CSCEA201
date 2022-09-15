#include <stdio.h>


    /* int A[2][2]; */

    /* int B[2][3]; */

    /* int C[2][3]; */

    /* A[0][0] = 1; */
    /* A[0][1] = 2; */
    /* A[1][0] = 3; */
    /* A[1][1] = 4; */

    /* B[0][0] = 1; */
    /* B[0][1] = 2; */
    /* B[0][2] = 3; */
    /* B[1][0] = 4; */
    /* B[1][1] = 5; */
    /* B[1][2] = 6; */

    /* C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0]; */
    /* C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1]; */
    /* C[0][2] = A[0][0] * B[0][2] + A[0][1] * B[1][2]; */

    /* C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0]; */
    /* C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1]; */
    /* C[1][2] = A[1][0] * B[0][2] + A[1][1] * B[1][2]; */

    /* printf("{%.2d ", C[0][0]); */
    /* printf("%.2d ", C[0][1]); */
    /* printf("%.2d}\n", C[0][2]); */
    /* printf("{%d ", C[1][0]); */
    /* printf("%d ", C[1][1]); */
    /* printf("%d}\n", C[1][2]); */

    /* void sum(void) first void means it returns no value second void means that it takes no parameters*/


    int power(int x, int y) {
        int i;
        int final;
        for (i = 1; i <= y; i++ ) {
             final = x * i;
        }
        return final;
    }

    int main(void) {
        int x, y;
        int final;
        scanf("%d", &x);
        scanf("%d", &y);
        int temp = 0;
        final = power(x, y);
        printf("%d\n", final);
    }
