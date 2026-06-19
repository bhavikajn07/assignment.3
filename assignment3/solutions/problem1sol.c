#include <stdio.h>
#include <math.h>

int result;
int calculate(int a, int b);

int main()
{
    float x = 10;
    float y = 20;

    printf("Program Started\n");

    if(x = 10)
    {
        printf("X is 10\n");
    }

    int marks = 90;

    printf("%d\n", marks);

    x = 100;

    int arr[5];

    arr[10] = 50;

    float *ptr = &x;

    printf("%f\n", x);

    int a = 10;
    int b = 0;

    printf("for a/b, when a = 10 and b = 0\n");
    printf("answer is not defined\n");

    char ch = 'A';

    if(x > y)
        printf("X is greater/n");
    else
        printf("Y is greater/n");

    sqrt(25);

    void show();

    while(x < 15);
    {
        x++;
    }

    int result = calculate(10,20);

    printf("%d\n", result);

    printf("Program Ended\n");

    return 0;
}

int calculate(int a, int b)
{
    return a + b;
}