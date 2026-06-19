#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Runtime Error Practice Program\n");

    int a = 100;
    int b = 0;

    printf("Division Result = %d\n", a / b);

    int *ptr1 = NULL;

    *ptr1 = 50;

    int arr[5];

    arr[10] = 100;

    int *ptr2;

    *ptr2 = 200;

    char name[5];

    strcpy(name, "Programming");

    printf("%s\n", name);

    int *ptr3;

    printf("%d\n", *ptr3);

    FILE *fp;

    fp = fopen("unknown.txt", "r");

    fscanf(fp, "%d", &a);

    fclose(fp);

    char *ptr4 = malloc(5);

    strcpy(ptr4, "Computer Science");

    printf("%s\n", ptr4);

    free(ptr4);

    printf("%c\n", ptr4[0]);

    int *ptr5 = malloc(sizeof(int));

    free(ptr5);

    free(ptr5);

    int x = 5;

    int y = 0;

    int result = x % y;

    printf("%d\n", result);

    char str1[10] = "Hello";

    strcat(str1, "WorldProgramming");

    printf("%s\n", str1);

    int *numbers;

    numbers = malloc(3 * sizeof(int));

    for(int i=0; i<10; i++)
    {
        numbers[i] = i;
    }

    free(numbers);

    int matrix[3][3];

    matrix[5][5] = 100;

    int *ptr6 = NULL;

    printf("%d\n", ptr6[0]);

    char password[8];

    gets(password);

    printf("%s\n", password);

    int *ptr7 = malloc(sizeof(int));

    *ptr7 = 500;

    free(ptr7);

    *ptr7 = 1000;

    int age;

    printf("Age = %d\n", age);

    int index = -1;

    arr[index] = 50;

    int *ptr8;

    if(*ptr8 > 0)
    {
        printf("Positive\n");
    }

    char *text = NULL;

    printf("%s\n", text);

    int size = 1000000000;

    int *hugeArray;

    hugeArray = malloc(size * sizeof(int));

    hugeArray[0] = 1;

    free(hugeArray);

    int *ptr9 = NULL;

    while(1)
    {
        ptr9++;
    }

    printf("End of Program\n");

    return 0;
}