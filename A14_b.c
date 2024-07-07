#include<stdio.h>
enum week{
    sunday=1,
    monday,
    tuesday,
    wednesday,
    thrusday,
    friday,
    saturday
};
int main(){
int a;
printf("Choice the number in range in 1 to 7:");
scanf("%d",&a);
switch (a){
    case sunday:
        printf("The selected day is sunday\n");
    break;
    case monday:
        printf("The selected day is monday\n");
    break;
    case tuesday:
        printf("The selected day is tuesday\n");
    break;
    case wednesday:
        printf("The selected day is wednesday\n");
    break;
    case thrusday:
        printf("The selected day is thrusday\n");
    break;
    case friday:
        printf("The selected day is friday\n");
    break;
    case saturday:
        printf("The selected day is saturday\n");
    break;
    default:
        printf("Selected number is out of range\n");
    break;
}
}