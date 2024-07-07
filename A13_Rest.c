#include<stdio.h>


//Q.b
int happy(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}


//Q.c
/*void swap(int *a,int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}*/
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Factorial of %d is: %d",x,happy(x));



   /* int x, y;                                                                    
                                                                                
   printf("Enter x: ");                                                         
   scanf("%d", &x);                                                             
   printf("Enter y: ");                                                         
   scanf("%d", &y);                                                             
                                                                                
   printf("Before swap: x = %d, y = %d\n", x, y);
   swap (&x,&y);                              
   printf("After Swap: x = %d, y = %d\n",x,y); */                                
}