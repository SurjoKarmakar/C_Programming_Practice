//write a program to determine whether the seller has made profit or loss..and also determine how much profit or loss is made
#include<stdio.h>
int main(){
    int costPrice, sellPrice;
    printf("Enter the Product cost price : ");
    scanf("%d",&costPrice);
    printf("Enter the Product selling price : ");
    scanf("%d",&sellPrice);

    if (sellPrice > costPrice)
        printf("Your profit is : %d ",sellPrice-costPrice);
    else 
        printf("Your loss is : %d",costPrice-sellPrice);
    return 0;
}