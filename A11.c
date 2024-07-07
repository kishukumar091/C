#include<stdio.h>
int main()
{
   //Q.a
   /*int a=45;
    int b=5;*/

    //With 3rd Variable
    /*int c;
    c=a;
    a=b;
    b=c;*/

    //Without 3rd variable
    /*a=a+b;
    b=a-b;
    a=a-b;*/
    /*printf("%d\n",a);
    printf("%d\n",b);*/




    
    //Q.b

    /*int a;
    float b;
    char c;
    long double d;
    printf("\nSize of int is %ld",sizeof(a));
    printf("\nSize of float is %ld",sizeof(b));
    printf("\nSize of char is %ld",sizeof(c));
    printf("\nSize of lond Double is %ld",sizeof(d)); */

    //Q.c
   /* float C;
    float F;
    printf("Celsius C:");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("Fahrenheit F:%f",F);*/

    //Q.d
    /*int x=10;
    int y=3;
    int a=x+y;
    int b=x-y;
    int c=x*y;
    int d=x/y;
    int e=x%y;
    printf("\n a:%d",a);
    printf("\n b:%d",b);
    printf("\n c:%d",c);
    printf("\n d:%d",d);
    printf("\n e:%d",e);*/



    //Q.e
    int a;
    int b;
    int c;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    printf("Enter third Number:");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("a is greatest");
    }
    else if(b>a && b>c){
        printf("b is greatest");
    }
    else{
        printf("c is greatest");
    }
}