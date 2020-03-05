#include <stdio.h>

void swap(int num1, int num2)
{

    int temp;

    temp = num1;
    printf("num1: %d; num2: %d; temp: %d\n", num1, num2, temp);
    num1 = num2;
    printf("num1: %d; num2: %d; temp: %d\n", num1, num2, temp);
    num2 = temp;
    printf("num1: %d; num2: %d; temp: %d\n", num1, num2, temp);
}

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 1000;

    printf("num1: %d; num2: %d\n", a, b);
    swap(a, b);
    return 0;
}
