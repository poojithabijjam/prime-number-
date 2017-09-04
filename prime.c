#include<stdio.h>
#include<math.h>
static int count;
int main()
{
        int n;
        printf("enter a number to check if it is prime");
        scanf("%d",&n);
        int p=sqrt(n);
        if(n==2||n==3)
        {       printf("Given number is  a prime number");
         exit(0);
        }
         if((n%2)==0||(n%3)==0||(n%5)==0||(n%p)==0)
        {
                count++;

        }
        if(count==0)
        {
                printf("Given number is a  prime number");
        }
        else
        {
                printf("Given number is not a prime number");
        }
        return 0;
}
