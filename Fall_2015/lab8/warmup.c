
#include <stdio.h>

double areaOfTriangle(double baseTri, double heightTri)
{
    double triangleArea;

    triangleArea = (baseTri * heightTri)/2;

    return triangleArea;
}

void printArea(double areaTri)
{
    printf("The area of the triangle is %.2lf units^2\n", areaTri );
}

int main()
{
    double base;
    double height;
    double area;

    base = 0.00;
    height = 0.00;
    area = 0.00;

    printf("Calculating Area of Triangle\n");
    
    printf("Base: ");
    scanf("%lf",&base);

    printf("Height: ");
    scanf("%lf", &height);


    area = areaOfTriangle(base,height);
    printArea(area);

    // printArea(areaOfTriangle(base,height));

    return 0;
}