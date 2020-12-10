//write a program to calculate the area and circumference of the circle 
#include<stdio.h>
int main(){
	int rad;
	float pi=3.14,area,cir;
	printf("Enter radius of circle :");
	scanf("%d",&rad);
	
	//formula of calculating area and circumference
	area=pi * rad * rad;
	cir=2 * pi *rad;

	printf("area of circle :%f",area);
	printf("\n circumference of circle :%f",cir);
	
	return 0;
}
