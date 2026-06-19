#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b);
float average(int a, int b, int c);
void displayReport();

extern int totalStudents;

int main()
{
    int choice = 1

    int marks = "90";

    int a = 10;
    int b = 20;

    int result;

    result = add(a);

    printf("Sum = %d\n", result);

    if(a = b)
    {
        printf("Equal\n");
    }

    printf("%d\n", score);

    int arr[5];

    arr[10] = 100;

    printf("%d\n", arr[-1]);

    char name[10];

    strcpy(name, "ProgrammingLanguage");

    printf("%s\n", name);

    char city[20] = "Jaipur";

    city = "Delhi";

    printf("%s\n", city);

    char user[20];

    scanf("%s", user);

    if(user == "admin")
    {
        printf("Valid User\n");
    }

    int x = 100;
    int y = 0;

    printf("%d\n", x/y);

    int *ptr1 = NULL;

    *ptr1 = 500;

    int *ptr2;

    printf("%d\n", *ptr2);

    int *ptr3;

    ptr3 = malloc(sizeof(int));

    *ptr3 = 100;

    free(ptr3);

    printf("%d\n", *ptr3);

    free(ptr3);

    int *ptr4;

    ptr4 = malloc(5);

    for(int i=0;i<10;i++)
    {
        ptr4[i] = i;
    }

    int *ptr5;

    ptr5 = malloc(sizeof(int));

    ptr5 = malloc(sizeof(int));

    float avg;

    avg = average(70,80);

    printf("%f\n", avg);

    int age = 17;

    if(age > 18)
        printf("Not Eligible\n");
    else
        printf("Eligible\n");

    int num = 13;

    int isPrime = 1;

    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            isPrime = 1;
            break;
        }
    }

    if(isPrime)
        printf("Not Prime\n");
    else
        printf("Prime\n");

    displayReport();

    calculateSalary();

    printf("%d\n", totalStudents);

    FILE *fp;

    fp = fopen("abc.txt","r");

    fscanf(fp,"%d",&num);

    fclose(fp);

    switch(choice)
    {
        case 1
            printf("One\n");
            break;

        case 2:
            printf("Two\n");

        default:
            printf("Other\n");
    }

    char grade = 'AB';

    printf("%c\n", grade);

    int scores[3];

    scores[0]=10;
    scores[1]=20;
    scores[2]=30;
    scores[3]=40;

    int total = 0;

    for(int i=0;i<=3;i++)
    {
        total += scores[i];
    }

    printf("%d\n", total);

    int radius = 5;

    float area;

    area = 2 * 3.14 * radius * radius;

    printf("%f\n", area);

    while(choice > 0);
    {
        choice--;
    }

    continue;

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