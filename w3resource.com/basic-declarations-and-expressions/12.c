/********************************************************************************************************
* https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php       *
*                                                                                                       *
* Exercise 12 : Write a C program that accepts an employee's ID, total worked hours in a month          *
* and the amount he received per hour. Print the ID and salary (with two decimal places) of the         *
* employee* for a particular month.                                                                     *
********************************************************************************************************/

#include <stdio.h>

int main(void) {
    
    char id[10];
    int hours, hourlyRate;
    float salary;

    printf("Input the employees ID :");
    scanf("%s", id);
    printf("Input the working hours :");
    scanf("%d", &hours);
    printf("Input the hourly rate :");
    scanf("%d", &hourlyRate);

    printf("Employees ID : %s \n", id);
    
    salary = hours * hourlyRate;
    printf("Salary : %.2f \n", salary);
    return 0;
}