#include<stdio.h>
int main()
{
	int temp, a=10, b=20;
	printf("[+] Before Swaping a = %d and b = %d\n",a,b);

	//swap number 
	a=a+b;//a=30 (10+20)    
	b=a-b;//b=10 (30-20)    
	a=a-b;//a=20 (30-10) 

	printf("[+] After Swaping a = %d and b = %d\n",a,b);
	return 0;
}
