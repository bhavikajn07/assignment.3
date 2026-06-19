#include <stdio.h>

int add(int a, int b);

int main()
{
    int choice;
    int num1 = 10;
    int num2 = 20// semicolon is missing
    int result;

    printf("=== MENU ===\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1//missing )
    {
        result = num1 + num2;
        printf("Result = %d\n", result);
    }

    else if(choice == 2)
    {
        result = num1 - num2;
        printf("Result = %d\n", result);
    }

    else if(choice == 3))//extera ) should be removed
    {
        result = num1 * num2;
        printf("Result = %d\n", result);
    }

    else if(choice == 4)
    {
        result = num1 / num2;
        printf("Result = %d\n", result);
    }

    else
    {
        printf("Invalid Choice\n");
    }

    for(int i=0; i<5; i++// missing )
    {
        printf("%d ", i);
    }

    printf("\n");

    while(choice > 0//missing)
    {
        choice--;
    }

    do
    {
        printf("Processing...\n");
    }
    while(choice > 5) // missing semicolon after do-while

    switch(choice)
    {
        case 1:
            printf("One\n");
            break;

        case 2 // missing ':' after case label
            printf("Two\n");
            break;

        default:
            printf("Other\n");
    }

    int marks = 80;

    if(marks >= 90)
    {
        printf("Grade A\n");
    }
    else if(marks >= 80)
    {
        printf("Grade B\n");
    }
    else if(marks >= 70)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Grade D\n");
    }

    char grade = 'A; // missing closing quote for character literal

    printf("Grade = %c\n", grade);

    int arr[5; // missing closing bracket ']'

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("%d\n", arr[0]);

    if(arr[0] > 5)
    {
        printf("Greater\n");
    }

    {
        printf("Block Start\n");

        if(arr[1] > 10)
        {
            printf("Condition True\n");
        }

    printf("Still Running\n");

    for(int j=0; j<3; j++)
    {
        printf("%d\n", j);
    }// missing closing brace for the block opened earlier

    printf("End of Program\n") // missing semicolon

    return 0; // missing closing brace for the block opened earlier
}

int add(int a, int b)
{
    return a + b;
}