#include <stdio.h>
#include <string.h>

int main()
{
    int marks[5] = {80, 75, 90, 85, 95};

    printf("Student Marks\n");

    for(int i=0; i<=5; i++)
    {
        printf("%d ", marks[i]); // will access marks[5] when i==5, which is outside the array bounds
    }

    printf("\n");

    int total = 0;

    for(int i=0; i<5; i++)
    {
        total += marks[i];
    }

    float average;

    average = total / 5; // performs integer division; cast or use 5.0 to get a floating-point average

    printf("Average = %.2f\n", average);

    printf("\n");

    int numbers[10];

    for(int i=1; i<=10; i++)
    {
        numbers[i] = i * 10; // indexes 1..10 are used here; numbers[10] is out of range (valid 0..9)
    }

    printf("Numbers Array\n");

    for(int i=0; i<10; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    char name[10];

    strcpy(name, "ComputerScience"); // source string is longer than the buffer and will overflow

    printf("%s\n", name);

    printf("\n");

    char city[20] = "Jaipur";

    city = "Delhi"; // array names are not assignable; use strcpy to copy into the array

    printf("%s\n", city);

    printf("\n");

    char str1[20] = "Hello";
    char str2[20] = "Hello";

    if(str1 == str2) // compares pointers, not string contents; use strcmp to compare strings
    {
        printf("Strings are Equal\n");
    }
    else
    {
        printf("Strings are Different\n");
    }

    printf("\n");

    char password[8];

    printf("Enter Password: ");
    gets(password); // unsafe input: gets can overflow the buffer; use fgets with a size limit

    printf("Password = %s\n", password);

    printf("\n");

    char firstName[20] = "Robil";
    char lastName[20] = "Varshney";

    strcat(firstName, lastName);

    printf("%s\n", firstName);

    printf("\n");

    char grade[5];

    grade[0] = 'A';
    grade[1] = '+';

    printf("%s\n", grade); // missing null terminator for the string; set grade[2] = '\0' before printing

    printf("\n");

    int arr[5] = {1,2,3,4,5};

    printf("%d\n", arr[-1]); // negative index accesses invalid memory

    printf("\n");

    char department[10];

    scanf("%s", department);

    printf("%s\n", department);

    printf("\n");

    char email[15] = "student@gmail.com"; // initializer longer than the array size; will overflow or be truncated

    printf("%s\n", email);

    printf("\n");

    int scores[3];

    scores[0] = 90;
    scores[1] = 80;
    scores[2] = 70;
    scores[3] = 60; // writing to scores[3] exceeds the allocated array (valid indices 0..2)

    printf("%d\n", scores[3]); // reading out-of-bounds

    printf("\n");

    char subject[10] = "Programming";

    printf("%s\n", subject);

    printf("\n");

    char username[20];

    printf("Enter Username: ");
    scanf("%s", username);

    if(username == "admin") // compares pointers, not contents; use strcmp(username, "admin") == 0
    {
        printf("Valid User\n");
    }
    else
    {
        printf("Invalid User\n");
    }

    printf("\n");

    char mobile[10];

    strcpy(mobile, "987654321012"); // destination buffer too small for the literal, will overflow

    printf("%s\n", mobile);

    printf("\n");

    int attendance[5] = {1,1,1,1,1};

    int present = 0;

    for(int i=0; i<=5; i++)
    {
        present += attendance[i]; // loop uses <=5 which accesses attendance[5], out of bounds (valid 0..4)
    }

    printf("Present Days = %d\n", present);

    printf("\n");

    char course[20] = "C Programming";

    printf("%c\n", course[20]); // index 20 is out of range for course (valid 0..19)

    printf("\n");

    char college[20];

    college[0] = 'A';
    college[1] = 'C';
    college[2] = 'E';
    college[3] = 'I';
    college[4] = 'T';

    printf("%s\n", college); // college array is not null-terminated after manual assignments, printing may read past bounds

    printf("\n");

    int rollNo[5];

    for(int i=0; i<5; i++)
    {
        scanf("%d", &rollNo[i]);
    }

    printf("\nRoll Numbers\n");

    for(int i=0; i<5; i++)
    {
        printf("%d ", rollNo[i]);
    }

    printf("\n");

    char section[3] = "IT-A"; // initializer too large for the array, will overflow

    printf("%s\n", section);

    printf("\n");

    printf("Program Finished\n");

    return 0;
}