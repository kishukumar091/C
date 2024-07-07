#include <stdio.h>
int main() {
    float basicSalary, HRA, DA, grossSalary;
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    if (basicSalary <= 12000) {
    HRA = 0.15 * basicSalary;
    DA = 0.70 * basicSalary;
    } 
    else if (12001 <= basicSalary <= 22000) {
    HRA = 0.25 * basicSalary;
    DA = 0.80 * basicSalary;
    } 
    else {
    HRA = 0.25 * basicSalary;
    DA = 0.95 * basicSalary;
    }
    grossSalary = basicSalary + HRA + DA;
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA: %.2f\n", HRA);
    printf("DA: %.2f\n", DA);
    printf("Gross Salary: %.2f\n", grossSalary);
    return 0;
}