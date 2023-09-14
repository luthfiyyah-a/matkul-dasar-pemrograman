/*
calculate the area of a circle
*/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    double radius; // input - radius of the circle
    double area; // outpu - area of the circle
    // get the radius
    printf("inpur the radius : ");
    scanf("%lf", &radius);
    // calculate the area
    area = PI * pow(radius, 2);
    // display the result
    printf("the area of the circle is %lf", area);
    return 0;
}
