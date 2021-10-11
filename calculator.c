/* Calculator program in C using function and switch statements */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Function declarations

int menu();
float input();
void add();
void subtract();
void multiply();
void divide();
void square();
void sqrt1();
void Clear();
char str1();
char str2();
char str3();

float previous_result = false, result = 0;

// Main function

void main()
{
    while (1)
    {
        printf("**************************\n");
        printf("**************************\n");
        printf("Previous result is : %.2f\n", result);

        /* switch statement to call an operation */

        switch (menu())
        {
        case 1:
            add(); // It calls the add() function to add the given numbers
            previous_result = true;
            break; // Break the function

        case 2:
            subtract(); // It calls the Subtract() function to add the given numbers
            previous_result = true;
            break; // Break the function

        case 3:
            multiply(); // It calls the Multiply() function to add the given numbers
            previous_result = true;
            break; // Break the function

        case 4:
            divide(); // It calls the Divide() function to add the given numbers
            previous_result = true;
            break; // Break the function

        case 5:
            square(); // It calls the Square() function to add the given numbers
            previous_result = true;
            break; // Break the function

        case 6:
            sqrt1(); // It calls the sqrt1() function to add the given numbers
            previous_result = true;
            break; // Break the function

        case 7:
            Clear(); // It calls the Clear() function to add the given numbers
            break;   // Break the function

        case 8:
            exit(0); // It calls the exit() function to add the given numbers
            break;   // Break the function

        default:
            printf("Invalid choice\n");
            break; // Break the function
        }
    }
}

/* menu() function to select choice */

int menu()
{
    int choice;
    printf("1 : Addition\n");
    printf("2 : Subtraction\n");
    printf("3 : Multiplication\n");
    printf("4 : Division\n");
    printf("5 : Square\n");
    printf("6 : SquareRoot\n");
    printf("7 : Clear\n");
    printf("8 : Exit\n");
    printf("Enter your choice : \n");
    scanf("%d", &choice);
    return (choice);
}

/* input() function to take input from user */

float input()
{
    float num;
    scanf("%f", &num);
    return (num);
}

/* str1() function to accept first value from the user */

char str1()
{
    char str;
    char str1[30];
    printf("Enter the first number :  \n");
    return (str);
}

/* str1() function to accept first value from the user */

char str2()
{
    char str;
    char str2[30];
    printf("Enter the second number :  \n");
    return (str);
}
/* str1() function to accept first value from the user */

char str3()
{
    char str;
    char str3[30];
    printf("Enter the numbers : \n");
    return (str);
}

/* add() function to add the numbers by accepting input by the user */

void add()
{
    int i;
    float no_of_inputs, num;
    char str;
    if (previous_result)
    {
        printf("How many numbers you want to add : \n");
        no_of_inputs = input();
        str = str3();
        for (i = 1; i <= no_of_inputs; i++)
        {
            num = input();
            result += num;
        }
        printf("The addition is : %.2f\n", result);
    }
    else
    {
        printf("How many numbers you want to add : \n");
        no_of_inputs = input();
        str = str3();
        for (i = 1; i <= no_of_inputs; i++)
        {
            num = input();
            result += num;
        }
        printf("The addition is : %.2f\n", result);
    }
}

/* subtract() function to subtract numbers by accepting input from the user */

void subtract()
{
    float num1, num2;
    char str;
    if (previous_result)
    {
        str = str2();
        num2 = input();
        result -= num2;
        printf("The subtraction is : %.2f\n", result);
    }
    else
    {
        str = str1();
        num1 = input();
        str = str2();
        num2 = input();
        result = num1 - num2;
        printf("The subtraction is : %.2f\n", result);
    }
}

/* multiply() function to multiply numbers by accepting input from the user */

void multiply()
{
    float no_of_inputs, num, temp1, temp2;
    int i;
    char str;
    if (previous_result)
    {
        printf("How many numbers you want to multiply : \n");
        no_of_inputs = input();
        str = str3();
        for (i = 1; i <= no_of_inputs; i++)
        {
            num = input();
            temp1 = 1 * num;
            temp2 = result;
            result = temp1 * temp2;
        }
        printf("The multiplication is : %.2f\n", result);
    }
    else
    {
        printf("How many numbers you want to multiply : \n");
        no_of_inputs = input();
        str = str3();
        for (i = 1; i <= no_of_inputs; i++)
        {
            num = input();
            temp1 = 1 * num;
            temp2 = result;
            result = temp1 + temp2;
        }
        printf("The multiplication is : %.2f\n", result);
    }
}

/* divide() function to divide the numbers by accepting input from the user */

void divide()
{
    float num1, num2;
    char str;
    if (previous_result)
    {
        str = str2();
        num2 = input();
        result /= num2;
        printf("The division is : %.2f\n", result);
    }
    else
    {
        str = str1();
        num1 = input();
        str = str2();
        num2 = input();
        result = num1 / num2;
        printf("The division is : %.2f\n", result);
    }
}

/* square() function to square the numbers by accepting input from the user */

void square()
{
    float num1;
    char str;
    if (previous_result)
    {
        result *= result;
        printf("The square of given number is : %.2f\n", result);
    }
    else
    {
        str = str1();
        num1 = input();
        result = num1 * num1;
        printf("The square of given number is : %.2f\n", result);
    }
}

/* sqrt1() function to calculate square root by accepting input from user*/

void sqrt1()
{
    float num1;
    char str;
    if (previous_result)
    {
        result = sqrt(result);
        printf("The square root of given number is : %.2f\n", result);
    }
    else
    {
        str = str1();
        num1 = input();
        result = sqrt(num1);
        printf("The square root of given number is : %.2f\n", result);
    }
}

/* Clear() function to Clear the screen */

void Clear()
{
    printf("Previous data cleared\n");
    result = 0;
    previous_result = 0;
}