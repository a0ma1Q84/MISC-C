/********************************************************************************************************
* https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php       *
*                                                                                                       *
* Write a C program to compute the perimeter and area of a rectangle with a height of 7 meters          *
* and width of 5 meters.                                                                                *
********************************************************************************************************/

#include <stdio.h>

// Constants
const int height = 7;
const int width = 5;

// Function to compute the area of the rectangle
int computeArea(int h, int w) {
    return h * w;
}

// Function to compute the perimeter of the rectangle
int computePerimeter(int h, int w) {
    return 2 * (h + w);
}

int main(void) {
    int area = computeArea(height, width);
    int perimeter = computePerimeter(height, width);

    printf("Height: %d meters\n", height);
    printf("Width: %d meters\n", width);
    printf("Area: %d square meters\n", area);
    printf("Perimeter: %d meters\n", perimeter);

    return 0;
}
