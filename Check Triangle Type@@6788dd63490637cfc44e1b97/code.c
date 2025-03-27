#include <stdio.h>

int main() {
    int s1, s2, s3;
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 == s2 && s2 == s3) {   // Equilateral: all sides are equal
        printf("Equilateral");
    } 
    else if (s1 == s2 || s2 == s3 || s1 == s3) {  // Isosceles: at least two sides are equal
        printf("Isosceles");
    } 
    else {  // Scalene: all sides are different
        printf("Scalene");
    }

    return 0;
}
