#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void printArray(int *arr, int size);

int main()
{
    int x = 10;
    int y = 20;

    int *ptr1;

    printf("%d\n", *ptr1); // dereferencing an uninitialized pointer

    int *ptr2 = NULL;

    *ptr2 = 100; // dereferencing a NULL pointer

    int *ptr3;

    ptr3 = &x;

    printf("%d\n", *ptr3);

    ptr3++;

    printf("%d\n", *ptr3); // pointer increment may point past valid object

    int arr[5] = {10,20,30,40,50};

    int *ptr4 = arr;

    printf("%d\n", *(ptr4 + 10)); // accessing far beyond array bounds

    int *ptr5;

    ptr5 = malloc(sizeof(int));

    *ptr5 = 500;

    printf("%d\n", *ptr5);

    free(ptr5);

    printf("%d\n", *ptr5); // reading memory after it was freed

    int *ptr6;

    ptr6 = malloc(sizeof(int));

    *ptr6 = 1000;

    ptr6 = NULL; // pointer set to NULL, the allocated memory is lost

    int *ptr7;

    ptr7 = malloc(5);

    for(int i=0; i<10; i++)
    {
        ptr7[i] = i; // writing past the small allocation
    }

    free(ptr7);

    int *ptr8;

    ptr8 = malloc(3 * sizeof(int));

    ptr8[0] = 10;
    ptr8[1] = 20;
    ptr8[2] = 30;
    ptr8[3] = 40; // index 3 is out of range for allocated 3-element array

    free(ptr8);

    int *ptr9;

    ptr9 = malloc(sizeof(int));

    *ptr9 = 50;

    free(ptr9);

    free(ptr9); // double free of the same pointer

    int *ptr10;

    ptr10 = malloc(sizeof(int));

    printf("%d\n", *ptr10); // reading uninitialized allocated memory

    int *numbers;

    numbers = malloc(5 * sizeof(int));

    for(int i=0; i<=5; i++)
    {
        numbers[i] = i * 10; // writes one past the allocated array
    }

    printArray(numbers,5);

    int a = 100;
    int b = 200;

    swap(&a,&b);

    printf("%d %d\n", a, b);

    int **pptr;

    int value = 500;

    pptr = &value; // pptr should point to an int*; assigning address of int is wrong

    printf("%d\n", **pptr);

    char *name;

    name = malloc(5);

    strcpy(name,"Programming"); // copying longer string than allocated buffer

    printf("%s\n", name);

    int *ptr11;

    ptr11 = malloc(sizeof(int));

    *ptr11 = 123;

    ptr11++;

    printf("%d\n", *ptr11); // pointer moved past allocated int, reading invalid memory

    int *ptr12 = NULL;

    if(*ptr12 > 0)
    {
        printf("Positive\n");
    } // dereferencing NULL pointer in condition

    int *ptr13;

    ptr13 = malloc(100 * sizeof(int));

    for(int i=0;i<100;i++)
    {
        ptr13[i] = i;
    }

    ptr13[100] = 500; // writing just past the allocated array

    int *ptr14;

    ptr14 = malloc(sizeof(int));

    free(ptr14);

    *ptr14 = 999; // writing to memory after it was freed

    int matrix[3][3];

    int *p;

    p = matrix; // assigning 2D array to int* leads to wrong pointer arithmetic

    printf("%d\n", *(p + 20)); // accessing far beyond matrix bounds

    int *ptr15;

    ptr15 = malloc(sizeof(int));

    ptr15 = malloc(sizeof(int)); // overwrites previous allocation, causing a memory leak

    printf("End of Program\n");

    return 0;
}

void swap(int *a, int *b)
{
    int *temp;

    temp = a;
    a = b;
    b = temp;
}

void printArray(int *arr, int size)
{
    for(int i=0; i<=size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}