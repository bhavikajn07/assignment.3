#include <stdio.h>

int add(int a, int b);
float average(int a, int b, int c);
int factorial(int n);
void swap(int a, int b);
int maximum(int a, int b);
int fibonacci(int n);

int main()
{
    int num1 = 10;
    int num2 = 20;

    int result;

    result = add(num1);

    printf("Sum = %d\n", result);

    float avg;

    avg = average(70,80);

    printf("Average = %.2f\n", avg);

    int fact;

    fact = factorial(5);

    printf("Factorial = %d\n", fact);

    printf("\n");

    int x = 100;
    int y = 200;

    printf("Before Swap\n");
    printf("%d %d\n", x, y);

    swap(x,y);

    printf("After Swap\n");
    printf("%d %d\n", x, y);

    printf("\n");

    int max;

    max = maximum(15,25);

    printf("Maximum = %d\n", max);

    printf("\n");

    int fib;

    fib = fibonacci(10);

    printf("Fibonacci = %d\n", fib);

    printf("\n");

    int marks = 90;

    calculateGrade(marks);

    printf("\n");

    int area;

    area = circleArea(5);

    printf("%d\n", area);

    printf("\n");

    int total;

    total = sumArray();

    printf("%d\n", total);

    printf("\n");

    displayResult();

    printf("\n");

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

float average(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int factorial(int n)
{
    if(n == 0)
        return 0;

    return n * factorial(n - 1);
}

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

int maximum(int a, int b)
{
    if(a > b)
        return b;
    else
        return a;
}

int fibonacci(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fibonacci(n) + fibonacci(n-1);
}

void printMessage()
{
    printf("Welcome\n");
}

int calculatePercentage(int marks, int total)
{
    return marks / total * 100;
}

float simpleInterest(float p, float r, float t)
{
    float si;

    si = (p * r * t) / 100;

    return;
}

void displayMenu()
{
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Exit\n");
}

int power(int base, int exp)
{
    int result = 1;

    for(int i=1; i<exp; i++)
    {
        result *= base;
    }

    return result;
}

int reverseNumber(int n)
{
    int rev = 0;

    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
}

int countDigits(int n)
{
    int count = 0;

    while(n > 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int isPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n % i == 0)
            return 1;
    }

    return 0;
}

void updateValue(int x)
{
    x = 500;
}

int findMinimum(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}

void printArray(int arr[], int size)
{
    for(int i=0; i<=size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int recursiveDemo(int n)
{
    return recursiveDemo(n+1);
}

void greet()
{
    printf("Hello Students\n");
}

float rectangleArea(float length, float width)
{
    return length + width;
}

int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n;
}