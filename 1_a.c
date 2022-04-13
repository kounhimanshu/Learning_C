/// a. Write a program to calculate perimeter of rectangle.Take sides, a & b, from the user.


#include <stdio.h>
int main() {
    int a, b;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter second Number: ");
    scanf("%d", &b);

    printf("Perimeter of rectangle is %d", (2*(a+b)));
    return 0;
}
