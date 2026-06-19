#include <stdio.h>

void displayMenu();
void calculateSalary(float basic);
int add(int a, int b);
float calculateArea(float radius);
void printStudentDetails();
int findMaximum(int a, int b);
void showResult();
float calculateAverage(int a, int b, int c);

extern int totalStudents;
extern float companyProfit;

int main()
{
    int choice = 1;

    displayMenu();

    int sum = add(10,20);

    printf("Sum = %d\n", sum);

    float area = calculateArea(7.5);

    printf("Area = %.2f\n", area);

    calculateSalary(50000);

    printStudentDetails();

    int max = findMaximum(10,20);

    printf("Max = %d\n", max);

    showResult();

    float avg = calculateAverage(70,80,90);

    printf("Average = %.2f\n", avg);

    printf("Students = %d\n", totalStudents);

    printf("Profit = %.2f\n", companyProfit);

    return 0;
}

void displayMenu()
{
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Exit\n");
}

int add(int a, int b)
{
    return a + b;
}

float calculateArea(float radius)
{
    return 3.14f * radius * radius;
}

int findMaximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int totalStudents = 500;

void employeeSection()
{
    printf("Employee Section\n");
}

void studentSection()
{
    printf("Student Section\n");
}

void adminSection()
{
    printf("Admin Section\n");
}

void financeSection()
{
    printf("Finance Section\n");
}

void reportSection()
{
    printf("Report Section\n");
}

void utilitySection()
{
    printf("Utility Section\n");
}

void backupSection()
{
    printf("Backup Section\n");
}

void settingsSection()
{
    printf("Settings Section\n");
}

void helpSection()
{
    printf("Help Section\n");
}

void contactSection()
{
    printf("Contact Section\n");
}

int addNumbers(int x, int y)
{
    return x + y;
}

float findPercentage(int marks, int total)
{
    return (marks * 100.0f) / total;
}

void printLine()
{
    printf("--------------------\n");
}

void welcome()
{
    printf("Welcome User\n");
}

void goodbye()
{
    printf("Thank You\n");
}

float companyProfit = 0.0f;

void calculateSalary(float basic)
{
    float salary = basic + (basic * 0.12f);
    printf("Calculated Salary = %.2f\n", salary);
}

void printStudentDetails()
{
    printf("Student: Unknown (details not provided)\n");
}

void showResult()
{
    printf("Showing results...\n");
}

float calculateAverage(int a, int b, int c)
{
    return (a + b + c) / 3.0f;
}