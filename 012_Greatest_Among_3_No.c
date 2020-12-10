// GREATEST AMONG 3 NO
#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("Enter 3 number :\n");
	scanf("%d\n%d\n%d",&n1,&n2,&n3);

	if (n1>n2 && n1>n3)
		printf("1st no is greater");
	else if (n2>n1 && n2>n3)
		printf("2nd no is greater");
	else
		printf("3rd no is greater");
	return 0;
}
