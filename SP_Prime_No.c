// Q. Write a program to check whether a number is prime or not.
#include<stdio.h>
void main()
{
   int num,i,count=0;
   printf("Enter a number: ");
   scanf("%d",&num);
   if(num==0)
        printf("%d is not a prime number!",num);
   else
   {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                printf("%d is not a prime number!",num);
                break;
            }
            else
            {
                continue;
            }
        }
   }
   if(i==num)
        printf("%d is a prime number.",num);
}
