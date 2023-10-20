/********************************************************************************************************
* https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php       *
*                                                                                                       *
* Write a C program to compute the perimeter and area of a circle with a given radius.                  *
* Expected Output:                                                                                      *
* Perimeter of the Circle = x.** units                                                                  *
* Area of the Circle = x.** units                                                                       *
********************************************************************************************************/

#include <stdio.h>

#define PI 3.14159f

// Function to compute the perimeter of the circle
double computePerimeter(float r) {
    return 2 * ( PI * r );
}

// Function to compute the area of the circle
double computeArea(float r) {
    return ( PI * ( r * r ));
}

int main(void) {
    float radius = 10.0f;
    
    // Calculate the perimeter and area
    double perimeter = computePerimeter(radius);
    double area = computeArea(radius);

    // Display the results
    printf("Perimeter = %.2lf units\n", perimeter);
    printf("Area = %.2lf square units\n", area);

    return 0;
}