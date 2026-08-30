#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    if (radius > 0) {
        area = PI * radius * radius;
        printf("The area of the circle is: %.2f\n", area);
    } else {
        printf("Radius must be positive.\n");
    }

    return 0;
}



