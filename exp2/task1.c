#include<stdio.h>
int main()
{

    int num;
    printf("\t\t\t*** even odd finder *** \n\n\n");
    printf("enter number: ");
    scanf("%d" , &num);
    if(num%2==0)
    {
        printf("is even");
    }
    else
    {
        printf(" is odd ");
    }
return 0;
}
