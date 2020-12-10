#include<stdio.h>
int main(){
	int p,n;
	float r,total;
	printf("enter the p , n , r \n");
	scanf("%d\n%d\n%f",&p,&n,&r);
	total=(p*n*r)/100;
	printf("total interst is %f :",total);
	return 0;
}
