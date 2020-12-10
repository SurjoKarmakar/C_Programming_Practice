//write a program to find out wherher it is odd and even number
#include<stdio.h>
int main()
{
	int n;
	printf("Enter an number :");
	scanf("%d",&n);

	// check number is Even or Odd
	if (n%2 ==0)				
		printf("%d => This is a Even number",n);
	else
		printf("%d => This is a Odd number",n);
	return 0;
}

