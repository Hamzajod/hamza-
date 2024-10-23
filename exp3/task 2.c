#includeM<stdio.h>
int main(){
 float num1,num2, result;
 int mod_result;
 char operator;
 
 printf("\t\t\t *** calculator ***\n\n");
 printf("\t operations :\n");
 printf("\t\t + : Addition\")
 printf("\t\t - : substraction \n");
 printf("\t\t * : multiplication \n");
 printf("\t\t - : division\n");
 printf("\t\t %% : modulus \n\n");
 
 repeat:
     
     printf("enter first operand:");
     scanf("%f", &num1);
     printf("enter second operand:");
     scanf("%f", &num2);
     printf("enter operation:");
     scanf("%c", &operator);
     
     switch (operator)
     {
         switch (operator)

case '+':
result=num1 + num2;
printf("%.1f+ %.1f = %.1f" , num1, num2 ,result);
case '-':
result= num1 - num2;
printf("%.1f- %.1f = %.1f" , num1, num2 ,result);
case '*':
result= num1 * num2;
printf("%.1f * %.1f = %.1f" , num1, num2 ,result);
case '/':
if(num2==0)
{
printf("cannot divide by zero");
break;
} 
reesult = num1/num2 ;
printf("%.1f / %.1f = %.1f" , num1, num2 ,result);
break;
case'%':
    mod_result = (int)num1 % (int)num2;
   printf("%.0f / %.0f = %.0f" , num1, num2 ,mod_result);
   break;
default;
   printf("invald operaor. try again.");
   break;
     }

 
 printf("Continue? (Y/N): ");
    scanf(" %c", &operator);
    if (operator == 'N' || operator == 'n') {
        printf("Thank you for using Calculator\n");
        return 0;
    }
    printf("\n\n");
    goto repeat;

    return 0; 
}














}
