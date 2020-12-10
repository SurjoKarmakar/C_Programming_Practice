#include<stdio.h>
int main()
{
	int temp, a=10, b=20;

	printf("[+] Before Swaping a = %d and b = %d\n",a,b);
	//swap number 
	temp = a;
	a = b;
	b = temp;

	printf("[+] After Swaping a = %d and b = %d\n",a,b);
	return 0;
}
