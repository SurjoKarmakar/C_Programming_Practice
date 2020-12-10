//write a programe to calculate average marks using user input
#include<stdio.h>
int main(){
    int eng,ben,math,computer;
    printf("Enter the following subject's marks one by one [english,bengali,math,computer] :\n");
    //multiple user input with single scanf() function 
    scanf("%d\n%d\n%d\n%d",&eng,&ben,&math,&computer);

    int aveMarks = (eng + ben + math + computer) / 4;
    printf("[+] Average Marks Of : %d",aveMarks);
    return 0;
}