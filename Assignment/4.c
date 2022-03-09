#include<stdio.h>
int main(){
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    switch(num>0){
        case 1:
            printf("%d is positive",num);
            break;
        case 0:
            switch(num<0){
                case 1:
                   printf("negative");
                   break;
                case 0:
                 printf("Zero");
                break;
            }
    }        
    return 0;
}