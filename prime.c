#include<stdio.h>
#include<math.h>
static int count;
void is_prime(int n)
{
 int p=sqrt(n);
 if(n==2||n==3)
        {       printf("Given number is  a prime number");
         exit(0);
        }
         if((n%2)==0||(n%3)==0||(n%5)==0||(n%p)==0)
        {
                count++;

        }
 //If a number is not divisible by 2,3,5 and square root of itself then it is a prime number
        if(count==0)
        {
                printf("Given number is a  prime number");
        }
        else
        {
                printf("Given number is not a prime number");
        }
}
int main()
{
        int n;
        printf("enter a number to check if it is prime");
        scanf("%d",&n);
        //int p=sqrt(n);
       is_prime(n);
        return 0;
}
