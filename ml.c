include <stdio.h>
int main()
{
int number, real Number, remainder, result = 0;
printf("Enter a three digit integer: ");
scanf("%d", &number);
real Number = number;
while (real Number != 0)
{
remainder = real Number%10;
result += remainder*remainder*remainder;
real Number=10;
}
if(result == number)
printf("%d is an Armstrong number.",number);
else
printf("%d is not an Armstrong number.",number);
return 0;
}
