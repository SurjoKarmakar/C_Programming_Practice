//check a number is absolute or not
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    printf("Enter a no : ");
    scanf("%d",&num);

    int absNum = abs(num);
    if (num == absNum)
        printf("%d This is Absolute no",num);
    else
        printf("%d This is not Absolute no",num);
    return 0;
}