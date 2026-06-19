#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b);
float average(int a, int b, int c);
void displayReport();

extern int totalStudents;

int main()
{
    int choice = 1; // missing semicolon

    int marks = "90"; // string assigned to integer

    int a = 10;
    int b = 20;

    int result;

    result = add(a); // missing second argument

    printf("Sum = %d\n", result);

    if(a = b) // assignment used instead of comparison
    {
        printf("Equal\n");
    }

    printf("%d\n", score); // use of undeclared variable 'score'

    int arr[5];

    arr[10] = 100; // writing outside array bounds

    printf("%d\n", arr[-1]); // negative index invalid

    char name[10];

    strcpy(name, "ProgrammingLanguage"); // source string longer than buffer

    printf("%s\n", name);

    char city[20] = "Jaipur";

    city = "Delhi"; // array not assignable; use strcpy to copy

    printf("%s\n", city);

    char user[20];

    scanf("%s", user); // unsafe input; may overflow, use fgets

    if(user == "admin") // compares pointers, use strcmp for string compare
    {
        printf("Valid User\n");
    }

    int x = 100;
    int y = 0;

    printf("%d\n", x/y); // division by zero when y is 0

    int *ptr1 = NULL;

    *ptr1 = 500; // dereferencing NULL pointer

    int *ptr2;

    printf("%d\n", *ptr2); // dereferencing uninitialized pointer

    int *ptr3;

    ptr3 = malloc(sizeof(int));

    *ptr3 = 100;

    free(ptr3);

    printf("%d\n", *ptr3); // using memory after it was freed

    free(ptr3); // double free of the same pointer

    int *ptr4;

    ptr4 = malloc(5);

    for(int i=0;i<10;i++)
    {
        ptr4[i] = i; // writing past allocated size
    }

    int *ptr5;

    ptr5 = malloc(sizeof(int));

    ptr5 = malloc(sizeof(int)); // previous allocation lost (memory leak)

    float avg;

    avg = average(70,80); // missing third argument

    printf("%f\n", avg);

    int age = 17;

    if(age > 18)
        printf("Not Eligible\n"); // logic reversed for eligibility
    else
        printf("Eligible\n");

    int num = 13;

    int isPrime = 1;

    for(int i=2;i<num;i++)
    {
            if(num%i==0)
            {
                isPrime = 1; // flag set incorrectly for composite numbers
                break;
            }
    }

    if(isPrime)
        printf("Not Prime\n");
    else
        printf("Prime\n");

    displayReport(); // function not defined here

    calculateSalary(); // function not defined here

    printf("%d\n", totalStudents);

    FILE *fp;

    fp = fopen("abc.txt","r");

    fscanf(fp,"%d",&num); // no check if file opened successfully

    fclose(fp);

    switch(choice)
    {
        case 1: // missing colon after case label
            printf("One\n");
            break;

        case 2:
            printf("Two\n");

        default:
            printf("Other\n");
    }

    char grade = 'AB'; // character literal too long

    printf("%c\n", grade);

    int scores[3];

    scores[0]=10;
    scores[1]=20;
    scores[2]=30;
    scores[3]=40; // writing past array bounds

    int total = 0;

    for(int i=0;i<=3;i++)
    {
        total += scores[i]; // loop reads past array end
    }

    printf("%d\n", total);

    int radius = 5;

    float area;

    area = 2 * 3.14 * radius * radius; // formula wrong; use 3.14 * radius * radius

    printf("%f\n", area);

    while(choice > 0); // stray semicolon makes an infinite loop
    {
        choice--;
    }

    continue; // continue not allowed outside a loop

    printf("Program Completed\n");

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

float average(int a, int b, int c)
{
    return (a+b+c)/3;
}

int totalStudents = 500;