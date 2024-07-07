#include<stdio.h>
int kishu(int x){
    int fact=1;
    for (int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
void singh(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%d",kishu(a));

    int q=4;
    int r=9;
    singh(&q,&r);
    printf("%d\n%d",q,r);
}
