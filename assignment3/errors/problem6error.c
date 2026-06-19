#include <stdio.h>

int main()
{
    int num;
    int marks;
    int year;
    int age;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num % 2 == 1)
        printf("Number is Even\n"); // odd check is correct but the printed message is reversed
    else
        printf("Number is Odd\n");

    printf("\n");

    printf("Enter marks: ");
    scanf("%d",&marks);

    if(marks >= 90)
        printf("Grade A\n"); // highest marks should get Grade A, not Grade B
    else if(marks >= 80)
        printf("Grade A\n"); // grade boundaries are swapped
    else if(marks >= 70)
        printf("Grade C\n");
    else if(marks >= 60)
        printf("Grade D\n");
    else
        printf("Fail\n");

    printf("\n");

    printf("Enter year: ");
    scanf("%d",&year);

    if(year % 4 == 0)
        printf("Leap Year\n"); // this leap year check ignores century rules (e.g. 1900 is not a leap year)
    else
        printf("Not Leap Year\n");

    printf("\n");

    printf("Enter age: ");
    scanf("%d",&age);

    if(age > 18)
        printf("Not Eligible for Voting\n"); //voting eligibility logic is reversed
    else
        printf("Eligible for Voting\n");

    printf("\n");

    int a = 10;
    int b = 20;

    if(a > b)
        printf("Smaller Number = %d\n", a); // comparison result is reversed, this prints the larger number
    else
        printf("Smaller Number = %d\n", b);

    printf("\n");

    int x = 10;
    int y = 20;
    int z = 30;

    int largest = x;

    if(y < largest)
        largest = y; // this finds the smaller value, not the largest

    if(z < largest)
        largest = z; // this still compares for smaller values

    printf("Largest Number = %d\n", largest);

    printf("\n");

    int totalMarks = 250;
    int subjects = 3;

    float average;

    average = totalMarks / subjects; // integer division truncates the result before assigning to float

    printf("Average = %.2f\n", average);

    printf("\n");

    int radius = 7;

    float area;

    area = 2 * 3.14 * radius * radius; //circle area formula should be pi * r * r, not 2 * pi * r * r

    printf("Circle Area = %.2f\n", area);

    printf("\n");

    int salary = 50000;

    float bonus;

    if(salary > 30000)
        bonus = salary * 0.02;
    else
        bonus = salary * 0.20;

    printf("Bonus = %.2f\n", bonus);

    printf("\n");

    int month = 4;

    switch(month)
    {
        case 1:
            printf("February\n");
            break;

        case 2:
            printf("March\n");
            break;

        case 3:
            printf("April\n");
            break;

        case 4:
            printf("May\n");
            break;

        default:
            printf("Invalid Month\n");
    }

    printf("\n");

    int n = 13;
    int isPrime = 1;

    for(int i=2;i<n;i++)
    {
        if(n % i == 0)
        {
            isPrime = 1; // composite number should set isPrime to 0, not 1
            break;
        }
    }

    if(isPrime)
        printf("Not Prime\n");
    else
        printf("Prime\n");

    printf("\n");

    int purchaseAmount = 5000;

    float discount = 0;

    if(purchaseAmount > 1000)
        discount = 5; // discount should reduce the amount, not be added

    float finalAmount;

    finalAmount = purchaseAmount + discount;

    printf("Final Amount = %.2f\n", finalAmount);

    printf("\n");

    int sum = 0;

    for(int i=1;i<=10;i++)
    {
        sum = i; // this overwrites sum instead of accumulating the values
    }

    printf("Sum = %d\n", sum);

    printf("\n");

    int temperature = 35;

    if(temperature < 40)
        printf("Cold Weather\n");
    else
        printf("Hot Weather\n"); // threshold may be too low for this message, but not a syntax error

    printf("\n");

    char grade = 'A';

    if(grade == 'A')
        printf("Average Performance\n"); // grade A should represent excellent performance, not average
    else
        printf("Excellent Performance\n");

    printf("\n");

    int length = 10;
    int width = 5;

    int rectangleArea;

    rectangleArea = length + width; // area of a rectangle is length * width, not length + width

    printf("Rectangle Area = %d\n", rectangleArea);

    printf("\n");

    int percentage = 75;

    if(percentage >= 60)
        printf("Fail\n"); // pass/fail condition is reversed
    else
        printf("Pass\n");

    printf("\n");

    printf("Program Completed Successfully\n");

    return 0;
}