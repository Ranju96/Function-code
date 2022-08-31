#include<stdio.h>

float squareof number(float num)
{
    return (num*num);
}
int main()
{
    float number, square;
    printf("Please Enter any integer Value : ");
    scanf("%f", &number);
    square = squareOfNumber(number);
    printf("square of a given number %.2f is  =  %.2f", number, square);
    return 0;
}
