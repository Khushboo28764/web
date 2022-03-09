#include<stdio.h>
int main(){
    int num;
    printf("Enter any year:\n");
    scanf("%d",&num);
    (num%4==0 && num%100!=0)? printf("LEAP YEAR"):
    (num%400==0)? printf("LEAP YEAR"):printf("COMMON YEAR");
    return 0;
}