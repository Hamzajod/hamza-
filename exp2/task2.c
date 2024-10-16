#include<stdio.h>
int main()
{
 int start_num,end_num,sum=0,i;
 printf("\t\t\t**Sum of odd numbers**\n\n\n");
 printf("Enter start number");
 scanf("%d",&start_num);
 printf("Enter ending number");
 scanf("%d",&end_num);
 if(start_num>end_num)
  {
  printf("Error:Ending number should be higher than starting number");
  return 1;
  }
 for(i=start_num;i<=end_num;i++)
 {
 if(i/2!=0)
  {
   sum=sum+i;
  }
 }
 printf("Sum of all the odd numbers between  %d & %d=%d",start_num,end_num,sum);
 return 0;
}
