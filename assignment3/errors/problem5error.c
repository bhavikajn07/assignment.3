#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Runtime Error Practice Program\n");

    int a = 100;
    int b = 0;

    printf("Division Result = %d\n", a / b); //dividing by zero will crash the program

    int *ptr1 = NULL;

    *ptr1 = 50; //dereferencing a NULL pointer

    int arr[5];

    arr[10] = 100; //writing outside the bounds of the array

    int *ptr2;

    *ptr2 = 200; //dereferencing an uninitialized pointer

    char name[5];

    strcpy(name, "Programming"); //copying a longer string into a smaller buffer

    printf("%s\n", name);

    int *ptr3;

    printf("%d\n", *ptr3); //ponter is not assigned, accessing it will lead to undefined behavior

    FILE *fp;

    fp = fopen("unknown.txt", "r");

    fscanf(fp, "%d", &a); //using the file pointer without checking if fopen succeeded

    fclose(fp);

    char *ptr4 = malloc(5);

    strcpy(ptr4, "Computer Science"); // error: copying more characters than allocated memory allows

    printf("%s\n", ptr4);

    free(ptr4);

    printf("%c\n", ptr4[0]); // error: accessing memory after it has been freed

    int *ptr5 = malloc(sizeof(int));

    free(ptr5);

    free(ptr5); // error: freeing the same pointer twice

    int x = 5;

    int y = 0;

    int result = x % y; // error: modulo by zero is undefined behavior

    printf("%d\n", result);

    char str1[10] = "Hello";

    strcat(str1, "WorldProgramming"); // error: concatenation overflows the destination buffer

    printf("%s\n", str1);

    int *numbers;

    numbers = malloc(3 * sizeof(int));

    for(int i=0; i<10; i++)
    {
        numbers[i] = i; // error: writing beyond allocated memory
    }

    free(numbers);

    int matrix[3][3];

    matrix[5][5] = 100; // error: matrix indices are out of bounds

    int *ptr6 = NULL;

    printf("%d\n", ptr6[0]); // error: dereferencing a NULL pointer

    char password[8];

    gets(password); // error: unsafe input function can overflow the buffer

    printf("%s\n", password);

    int *ptr7 = malloc(sizeof(int));

    *ptr7 = 500;

    free(ptr7);

    *ptr7 = 1000; // error: writing to memory after it has been freed

    int age;

    printf("Age = %d\n", age); // error: printing an uninitialized variable

    int index = -1;

    arr[index] = 50; // error: negative array index is invalid

    int *ptr8;

    if(*ptr8 > 0) // error: dereferencing an uninitialized pointer
    {
        printf("Positive\n");
    }

    char *text = NULL;

    printf("%s\n", text); // error: printing a NULL string pointer

    int size = 1000000000;

    int *hugeArray;

    hugeArray = malloc(size * sizeof(int)); // error: allocation may fail for an extremely large request

    hugeArray[0] = 1;

    free(hugeArray);

    int *ptr9 = NULL;

    while(1)
    {
        ptr9++; // error: infinite loop that keeps incrementing a NULL pointer
    }

    printf("End of Program\n");

    return 0;
}