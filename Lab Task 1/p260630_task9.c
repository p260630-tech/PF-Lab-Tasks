#include <stdio.h>

int main() {

    double basic_salary = 85000.00;
    double house_rent = 0.20 * basic_salary;
    double medical = 0.10 * basic_salary;
    double gross_salary = basic_salary + house_rent + medical;
    double tax = 0.05 * gross_salary;
    double net_salary = gross_salary - tax;

    printf("\t\t\tMONTHLY SALARY SLIP \n");
    printf("Basic Salary:\t\t\t\tPKR %.2f\n", basic_salary);
    printf("House Rent Allowance (20%%):\tPKR %.2f\n", house_rent);
    printf("Medical Allowance (10%%):\tPKR %.2f\n", medical);
    printf("\nGross Salary:\t\t\t\tPKR %.2f\n", gross_salary);
    printf("Tax Deduction (5%%):\t\t\tPKR %.2f\n", tax);
    printf("\nNet Payable Salary:\t\t\tPKR %.2f\n", net_salary);

    return 0;
}