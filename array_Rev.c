#include<stdio.h>
int main(){
    int sum[3][3];
    int arr[3][3]={{1, 2, 3},
                   {1, 3, 5},
                   {5, 5, 4}};
    int arr2[3][3]={{2, 6, 8},
                    {0, 4, 6},
                    {4, 5, 6}};
    
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j] = arr[i][j]+arr2[i][j];
        }
    }
    for (int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0;i<3;i++){
        for (int j =0;j<3;j++){
            printf("%d\t",sum[j][i]);
        }
        printf("\n");
    }
}