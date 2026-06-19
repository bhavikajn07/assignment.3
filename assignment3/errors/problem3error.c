#include <stdio.h>

int add(int a, int b);
float average(int a, int b, int c);

int main()
{
    int age = "Twenty"; // should be a numeric literal, not a string

    float salary = 50000.50;

    int marks = 85;

    char grade = "A"; // should use single quotes for char literals, e.g. 'A'

    printf("%d\n", salary); // salary is float, use %f

    printf("%f\n", marks); // marks is int, use %d

    int total;

    total = marks + score; // score is undefined, use an existing variable or declare score

    int x = 10;
    int x = 20; // duplicate declaration of x

    100 = x; // invalid assignment target, write x = 100 instead

    int num = 25;

    printf("%s\n", num); // num is int, use %d

    float pi = 3.14;

    printf("%d\n", pi); // pi is float, use %f

    int arr[5];

    arr[2.5] = 100; // array index must be an integer expression

    char ch = 65.5; // char must be assigned an integer or char literal, not a float

    int result;

    result = add(10); // add requires two arguments

    printf("%d\n", result);

    float avg;

    avg = average(10,20); // average requires three arguments

    printf("%f\n", avg);

    int temperature = "35"; // should be numeric literal, not string

    int amount = 1000;

    float discount = "10.5"; // should be numeric literal, not string

    amount = amount - discount;

    char name[20];

    name = "Robil"; // arrays cannot be assigned to after declaration;

    printf("%s\n", name);

    int count;

    count = totalMarks + 10; // totalMarks is undefined, use marks

    int number = 50;

    printf("%c\n", number); // number is int, use %d or cast to char

    float rate = 7.5;

    printf("%d\n", rate); // rate is float, use %f

    int a = 10;
    int b = 20;

    int sum;

    sum = add(a,b,c); // add accepts only two arguments

    printf("%d\n", sum);

    float radius = 5.5;

    int area;

    area = 3.14 * radius * radius;

    printf("%d\n", area); // area is float, use %f if area is float

    int studentMarks = 90;

    if(studentMarks = 100) // should use '==' for comparison, not assignment
    {
        printf("Perfect Score\n");
    }

    int size = "Large"; // use char array for text, not int

    printf("%d\n", size); // after making size a char array, use %s to print it

    float percentage = 89.75;

    printf("%d\n", percentage); // percentage is float, use %f

    int arr2[10];

    arr2["five"] = 100; // array index must be integer, not string

    int choice = 2;

    switch(choice)
    {
        case 1: 
            printf("One\n");
            break;

        case "2":// case labels must be integer constants, not string literals
            printf("Two\n");
            break;
    }

    int finalResult;

    finalResult = multiply(10,20); // multiply is undefined

    printf("%d\n", finalResult);

    int length = 10;
    int width = 5;

    float areaRect;

    areaRect = length * width;

    printf("%d\n", areaRect); // areaRect is float, use %f

    int marks1 = 70;
    int marks2 = 80;
    int marks3 = 90;

    int avgMarks;

    avgMarks = average(marks1, marks2, marks3);

    printf("%d\n", avgMarks);

    int data;

    printf("%d\n", value); // print data instead of value, as value is undefined

    int employeeId = "EMP101"; // should be numeric or use char array for text

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