#include <stdio.h>

int add(int a, int b);
float average(int a, int b, int c);
int multiply(int a, int b);

int main()
{
    int age = 20;

    float salary = 50000.50;

    int marks = 85;

    char grade = 'A';

    printf("%f\n", salary);

    printf("%d\n", marks);

    int total;

    total = marks;

    int x = 10;
    x = 20;

    x = 100;

    int num = 25;

    printf("%d\n", num);

    float pi = 3.14;

    printf("%f\n", pi);

    int arr[5];

    arr[2] = 100;

    char ch = 'A';

    int result;

    result = add(10,20);

    printf("%d\n", result);

    float avg;

    avg = average(10,20,30);

    printf("%f\n", avg);

    int temperature = 35;

    float amount = 1000;

    float discount = 10.5;

    amount = amount - discount;

    char name[20] = "Robil";

    printf("%s\n", name);

    int count;

    count = marks + 10;

    int number = 50;

    printf("%c\n", number);

    float rate = 7.5;

    printf("%d\n", rate);

    int a = 10;
    int b = 20;

    int sum;

    sum = add(a,b);

    printf("%d\n", sum);

    float radius = 5.5;

    int area;

    area = 3.14 * radius * radius;

    printf("%d\n", area);

    int studentMarks = 90;

    if(studentMarks = 100)
    {
        printf("Perfect Score\n");
    }

    char size[20] ="Large";

    printf("%s\n", size);

    float percentage = 89.75;

    printf("%f\n", percentage);

    int arr2[10];

    arr2[5] = 100;

    int choice = 2;

    switch(choice)
    {
        case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break;
    }

    int finalResult;

    finalResult = multiply(10,20);

    printf("%d\n", finalResult);

    int length = 10;
    int width = 5;

    float areaRect;

    areaRect = length * width;

    printf("%d\n", areaRect);

    int marks1 = 70;
    int marks2 = 80;
    int marks3 = 90;

    int avgMarks;

    avgMarks = average(marks1, marks2, marks3);

    printf("%d\n", avgMarks);

    int data;

    printf("%d\n", data);

    int employeeId = 101;

    printf("%d\n", employeeId);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int multiply(int a, int b)
{
    return a * b;
}