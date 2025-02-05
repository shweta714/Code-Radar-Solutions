#include <stdio.h>
int main() {
    float radius;
    scanf("%f",&radius);
    float area_of_circle=3.14*(radius*radius);
    printf("Area: %.2f",area_of_circle);
    return 0;
}