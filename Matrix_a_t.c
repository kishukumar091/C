#include <stdio.h>
int main() {
    int n;
    int m;
    int sum[3][3];
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter Number2: ");
    scanf("%d",&m);
    printf("First Matrix:\n");
    int arrr[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            arrr[i][j]=n;
            printf("%d\t",arrr[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix:\n");
    int arrr2[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            arrr2[i][j]=m*i;
            printf("%d\t",arrr2[i][j]);
        }
        printf("\n");
    }
    //Sum of Matrices
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            sum[i][j]=arrr[i][j]+arrr2[i][j];
        }
    } 
    printf("\nSum of matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of sum of matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", sum[j][i]);
        }
        printf("\n");
    }
}