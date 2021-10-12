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
void user_input_message();
bool use_previous_result = false;
float result = 0;

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
            use_previous_result = true;
            break;

        case 2:
            subtract(); // It calls the Subtract() function to add the given numbers
            use_previous_result = true;
            break;

        case 3:
            multiply(); // It calls the Multiply() function to add the given numbers
            use_previous_result = true;
            break;

        case 4:
            divide(); // It calls the Divide() function to add the given numbers
            use_previous_result = true;
            break;

        case 5:
            square(); // It calls the Square() function to add the given numbers
            use_previous_result = true;
            break;

        case 6:
            sqrt1(); // It calls the sqrt1() function to add the given numbers
            use_previous_result = true;
            break;

        case 7:
            Clear(); // It calls the Clear() function to add the given numbers
            break;

        case 8:
            exit(0); // It calls the exit() function to add the given numbers
            break;

        default:
            printf("Invalid choice\n");
            break;
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
    return choice;
}

/* input() function to take input from user */

float input()
{
    float num;
    scanf("%f", &num);
    return num;
}

/* This function prints message to take input from user */

void user_input_message()
{
    printf("Enter the number :  \n");
}

/* add() function to add the numbers by accepting input by the user */

void add()
{
    float no_of_inputs;
    printf("How many numbers you want to add : \n");
    no_of_inputs = input();
    user_input_message();
    for (int i = 1; i <= no_of_inputs; i++)
    {
        result += input();
    }
    printf("The addition is : %.2f\n", result);
}

/* subtract() function to subtract numbers by accepting input from the user */

void subtract()
{
    float no_of_inputs;
    printf("How many numbers you want to subtract : \n");
    no_of_inputs = input();
    user_input_message();
    if (use_previous_result)
    {
        for (int i = 1; i <= no_of_inputs; i++)
            result -= input();
    }
    else
    {
        for (int i = 1; i < no_of_inputs; i++)
            result = input();
        result -= input();
    }
    printf("The subtraction is : %.2f\n", result);
}

/* multiply() function to multiply numbers by accepting input from the user */

void multiply()
{
    float no_of_inputs;
    printf("How many numbers you want to multiply : \n");
    no_of_inputs = input();
    user_input_message();
    if (use_previous_result)
    {
        for (int i = 1; i <= no_of_inputs; i++)
            result *= input();
    }
    else
    {
        for (int i = 1; i < no_of_inputs; i++)
            result = input();
        result *= input();
    }
    printf("The multiplication is : %.2f\n", result);
}

/* divide() function to divide the numbers by accepting input from the user */

void divide()
{
    user_input_message();
    if (use_previous_result)
    {
        result /= input();
    }
    else
    {
        result = input();
        result /= input();
    }
    printf("The division is : %.2f\n", result);
}

/* square() function to square the numbers by accepting input from the user */

void square()
{
    float num;
    if (use_previous_result)
    {
        result *= result;
    }
    else
    {
        user_input_message();
        num = input();
        result = num * num;
    }
    printf("The square of given number is : %.2f\n", result);
}

/* sqrt1() function to calculate square root by accepting input from user*/

void sqrt1()
{
    if (use_previous_result)
    {
        result = sqrt(result);
    }
    else
    {
        user_input_message();
        result = sqrt(input());
    }
    printf("The square root of given number is : %.2f\n", result);
}

/* Clear() function to clear the screen */

void Clear()
{
    printf("Previous data cleared\n");
    result = 0;
    use_previous_result = 0;
}