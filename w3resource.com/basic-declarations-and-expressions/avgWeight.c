/********************************************************************************************************
* https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php       *
*                                                                                                       *
* Exercise 11 : Write a C program that accepts two item's                                               *
* weight and number of purchases (floating point values) and calculates their average value.            *
                                                                                                        *
********************************************************************************************************/

#include <stdio.h>

int main(void) {

    double weight_item1, weight_item2, quantity_item1, quantity_item2, averageValue;

    printf("Weight - Item 1: ");
    scanf("%lf", &weight_item1); // Get the weight of Item 1

    printf("Quantity - Item 1: ");
    scanf("%lf", &quantity_item1); // Get the quantity of Item 1

    printf("Weight - Item 2: ");
    scanf("%lf", &weight_item2); // Get the weight of Item 2

    printf("Quantity - Item 2: ");
    scanf("%lf", &quantity_item2); // Get the quantity of Item 1

     // Calculate the average value
    averageValue = ((quantity_item1 * weight_item1) + (quantity_item2 * weight_item2)) / (quantity_item1 + quantity_item2);

    // Display the result
    printf("Average value = %.2lf units of weight.\n", averageValue);

    return 0;
}
