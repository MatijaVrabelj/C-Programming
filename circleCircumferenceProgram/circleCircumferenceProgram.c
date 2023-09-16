#include<stdio.h>
#include<math.h>

int main()
{

    const double PI = 3.14159;
    double radius;
    double circumFerence;
    double area;

    printf("\nEnter radius of circle: ");
    scanf("%lf", &radius);

    
    area = PI * radius * radius;
    circumFerence = 2 * PI * radius;
    
    printf("circumference: %lf\n", circumFerence);
    printf("area: %lf", area);

    return 0;
}