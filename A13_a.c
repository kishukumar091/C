#include<stdio.h>
/*int add(int a,int b){
    return (a+b);   
}
int sub(int a,int b){
    return(a-b);
}
int mul(int a,int b){
    return(a*b);
}
float divi(float a,float b){
    return(a/b);
}*/


int kishu(int n){
   return n%10;
}
int singh(int n){   
   return (n/10)%10;
}
int rajput(int n){
   return (n/100)%10;
}
int happy(int n){
   return (n/1000)%10;
}
int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d\n",&num);
    printf("%d ones\n",kishu(num));
    printf("%d tens\n",singh(num));
    printf("%d hundreds\n",rajput(num));
    printf("%d thousands\n",happy(num));


    /*int x,y;
    printf("Enter X: ");
    scanf("%d",&x);
    printf("Enter Y: ");
    scanf("%d",&y);
    printf("Sum of a and b is:%d",add(x,y));
    printf("\nSubtraction of a and b is:%d",sub(x,y));
    printf("\nMultiply of a and b is:%d",mul(x,y));
    printf("\nDivision of a and b is:%f",divi(x,y));*/
}