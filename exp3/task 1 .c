
/*
    Expt. No : 3
    Title : WAP to design a menu driven caculator using switch and goto    


    Name: hamza siddiqui
    Class & Div: ECS-E
    UIN: 241S066
 */
// designing a menu driven calculator
#include <stdio.h>

int main() {
    float num1, num2, result;
    int mod_result;
    char operator;
// printing menu 
    printf("\t\t\t *** Calculator *** \n\n");
    printf("\t\t Enter an operation: \n\n");
    printf("\t\t\t + : Addition \n");
    printf("\t\t\t - : Subtraction \n");
    printf("\t\t\t * : Multiplication \n");
    printf("\t\t\t / : Division \n");
    printf("\t\t\t %% : Modulus \n");

repeat:
// fetching input
    printf("Enter first operand: ");
    scanf("%f", &num1);
    printf("Enter second operand: ");
    scanf("%f", &num2);
    printf("Enter an operation: ");
    scanf(" %c", &operator); 

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.1f + %.1f = %.1f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.1f - %.1f = %.1f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.1f * %.1f = %.1f\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Cannot divide by zero.\n");
                break;
            }
            result = num1 / num2;
            printf("%.1f / %.1f = %.1f\n", num1, num2, result);
            break;

        case '%':
            mod_result = (int)num1 % (int)num2;
            printf("%.0f %% %.0f = %d\n", num1, num2, mod_result);
            break;

        default:
            printf("Invalid operator. Try again.\n");
            break;
    }

    printf("Continue (Y/N): ");
    scanf(" %c", &operator); // Again, space before %c
    if (operator == 'N' || operator == 'n') {
        printf("Thank you for using the calculator.\n");
        return 0;
    }
        printf("\n");
    goto repeat;

    return 0; 
}

    /*
    OUTPUT
    			 *** Calculator *** 

		 Enter an operation: 

			 + : Addition 
			 - : Subtraction 
			 * : Multiplication 
			 / : Division 
			 % : Modulus 
Enter first operand: 1
Enter second operand: 2
Enter an operation: +
1.0 + 2.0 = 3.0
Continue (Y/N): y

Enter first operand: 2
Enter second operand: 3
Enter an operation: *
2.0 * 3.0 = 6.0
Continue (Y/N): y

Enter first operand: 3
Enter second operand: 3
Enter an operation: /
3.0 / 3.0 = 1.0
Continue (Y/N): n
Thank you for using the calculator.
    */
     
