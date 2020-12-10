//write a program to calculate the area and perimeter of the rectangle 
#include<stdio.h>
int main(){
	int length,breadth,perimeter,area;
	printf("Enter length :");
	scanf("%d",&length);
	printf("Enter breadth :");
	scanf("%d",&breadth);

	//formula of calculating area and perimeter 
	area=length*breadth;      
	perimeter=2*(length+breadth);
	
	printf("The area of rectangle is : %d",area);
	printf("\n");
	printf("The perimeter of rectangle is :%d",perimeter);
	
	return 0;
}
