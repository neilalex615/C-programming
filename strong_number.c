#include<stdio.h>
int factorial(int num)
{
    int fact=1;
    if(num==0) return 1;
    else
    {
        while(num>0)
        {
            fact=fact*num;
            num--;
            
        }
        return fact;
    }
}
int main()
{
    int n=0, digit=0, temp=0, fact_sum=0;
    printf("Enter a positive number: ");
    if ((scanf("%d",&n) || n>=0)!=1) return puts("Invalid Input"),1;
    temp=n;
    do
    {
        digit=n%10;
        fact_sum+=factorial(digit);
        n/=10;
    } while (n>0);
if (fact_sum==temp) puts("It is a Strong Number");
else puts("It is not a strong number");
printf("The Strong number check is %d\n",fact_sum);
return 0;
}