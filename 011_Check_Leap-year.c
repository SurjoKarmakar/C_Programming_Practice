//write a programm to determine whether the year is leap year or not
#include<stdio.h>
int main(){
	int year;
	printf("Enter a year : ");
	scanf("%d",&year);

	if(year%400==0 || year%100==0 || year%4==0)
		printf("%d This year is leap year",year);
	else
		printf("%d This year is not leap year",year);
	return 0;
}
