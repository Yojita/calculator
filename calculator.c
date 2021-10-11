/* Calculator program in C using function and switch statements */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float previousOutput = 0, result = 0;

/* Use menu() function to select choice */

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


/* Use input() function to take input from user */

float input()
{
    float num;
    scanf("%f", &num);
    return (num);
}


/* Use Add() function to add the numbers */

void Add()
{
    int i;                     // Declare a local variable
    float no_of_inputs, num;   // Declare a local variable

    if(previousOutput)
    {
        printf("How many numbers you want to add : \n");
        no_of_inputs = input();
        printf("Enter the numbers : \n");
        for(i = 1; i <= no_of_inputs; i++)
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
        printf("Enter the numbers : \n");
        for(i = 1; i <= no_of_inputs; i++)
        {
            num = input();
            result += num;
        }
        printf("The addition is : %.2f\n", result);
    }
}


    /* Use Subtract() function to subtract numbers */

    void Subtract()
    {
        float num1, num2;
        if(previousOutput)
        {
            printf("Enter the number : ");
            num2 = input();
            result -= num2;
            printf("The subtraction is : %.2f\n", result);
        }
        else
        {
            printf("Enter first number : ");
            num1 = input();
            printf("Enter second number : ");
            num2 = input();
            result = num1 - num2;
            printf("The subtraction is : %.2f\n", result);
        }
    }


    /* Use Multiply() function to multiply numbers */

    void Multiply()
    {
        float num1, num2;
        if(previousOutput)
        {
            printf("Enter the number : ");
            num2 = input();
            result *= num2;
            printf("The multiplication is : %.2f\n", result);
        }
        else
        {
            printf("Enter first number : ");
            num1 = input();
            printf("Enter second number : ");
            num2 = input();
            result = num1 * num2;
            printf("The multiplication is : %.2f\n", result);
        }
    }


    /* Use divide() function to divide numbers */

    void Divide()
    {
        float num1, num2;
        if(previousOutput)
        {
            printf("Enter the number : ");
            num2 = input();
            result /= num2;
            printf("The division is : %.2f\n", result);
        }
        else
        {
            printf("Enter first number : ");
            num1 = input();
            printf("Enter second number : ");
            num2 = input();
            result = num1 / num2;
            printf("The division is : %.2f\n", result);
        }
    }


    /* Use Square() function to get square of given number */

    void square()
    {
        float num1;        // local variable declaration
        if(previousOutput)
        {
            result *= result;
            printf("The square of given number is : %.2f\n", result);
        }
        else
        {
            printf("Enter the number : ");
            num1 = input();
            result = num1 * num1;
            printf("The square of given number is : %.2f\n", result);
        }
    }


    /* Use sqrt() function to get the square root of given function */

    void Sqrt()
    {
        float num1;        // local variable declaration 
        if(previousOutput)
        {
            result = sqrt(result);
            printf("The square root of given number is : %.2f\n", result);
        }
        else
        {
            printf("Enter the number : ");
            num1 = input();
            result = sqrt(num1);
            printf("The square root of given number is : %.2f\n", result);
        }
    }


    /* Use Clear() function to clear the screen */

    void Clear()
    {
        printf("Previous data cleared\n");
        result = 0;
        previousOutput = 0;
    }
    
// Main function

    void main()
    {   
        while(1)
        {
            printf("**************************\n");
            printf("**************************\n");
            printf("Previous result is : %.2f\n", result);


    /* Use switch statement to call an operation */

        switch (menu())
        {
            case 1:
            Add();                // It call the add() function to add the given numbers 
            previousOutput = 1;
            break;                // Break the function

            case 2:
            Subtract();           // It call the Subtract() function to add the given numbers 
            previousOutput = 1;
            break;                // Break the function


            case 3:
            Multiply();           // It call the Multiply() function to add the given numbers 
            previousOutput = 1;
            break;                // Break the function


            case 4:
            Divide();             // It call the Divide() function to add the given numbers 
            previousOutput = 1;
            break;                // Break the function


            case 5:
            square();             // It call the Square() function to add the given numbers 
            previousOutput = 1;
            break;                // Break the function


            case 6:
            Sqrt();         // It call the squareRoot() function to add the given numbers 
            previousOutput = 1;
            break;                // Break the function


            case 7:
            Clear();              // It call the Clear() function to add the given numbers 
            break;                // Break the function


            case 8:
            exit(0);               // It call the exit() function to add the given numbers 
            break;                // Break the function


            default:
            printf("Invalid choice\n");
            break;                // Break the function
        }
        }
    }