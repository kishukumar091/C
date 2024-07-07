#include <stdio.h>

int main() {
    int n;
    int m;
    int multi[3][3];
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter Number2: ");
    scanf("%d",&m);
    
    printf("First Matrix:\n");
    int arrr[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            arrr[i][j]=n+j;
            printf("%d\t",arrr[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix:\n");
    int arrr2[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            arrr2[i][j]=m+i+3;
            printf("%d\t",arrr2[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication of Two Matrix:\n");
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            multi[i][j]=0;
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            for (int k=0;k<3;k++){
                multi[i][j]+=arrr[i][k]*arrr2[k][j];
            }   
        }
    } 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", multi[i][j]);
        }
        printf("\n");
    }
}