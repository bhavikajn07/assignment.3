#include <stdio.h>
#include <math.h>

int calculate(int a, int b);

int main()
{
    int x = 10 //missing semicolon here
    int y = 20;

    printf("Program Started\n");

    if(x = 10)
    {
        printf("X is 10\n");
    }

    int marks = "Ninety"; // "Ninety" is treated as a string , integer (90) should have been assinged

    printf("%d\n", z);//z is not defined

    100 = x; //invalid assignment

    int arr[5];

    arr[10] = 50;

    float *ptr = &x;// x should be defined as a float

    printf("%f\n", x);

    int a = 10;
    int b = 0;

    printf("%d\n", a/b);

    char ch = 'AB';//only one character can be assigined

    if(x > y)// y is not defined
        printf("X is greater");
    else
        printf("X is greater");

    sqrt(25);

    show();//return type should be mentioned

    while(x < 15);
    {
        x++;
    }

    continue; //continue staatemt should be within the loop

    break; ////break staatemt should be within the loop

    int result = calculate(10);//another argument is missing

    printf("%d\n", result);

    printf("Program Ended\n");

    return 0;
}

int calculate(int a, int b)
{
    return a + b;
}