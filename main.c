#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
void main()
{
    char op;
    float num_1,num_2;
    int i ;
    printf("Enter the first number\n");
    scanf("%f",&num_1);
    for (i=0;i<=num_1;i++){
        printf("the fact %d = %d",i,fact(i));
    }
    /*printf("Enter the operator sign\n");
    scanf(" %c",&op);
    printf("Enter the second number\n");
    scanf("%f",&num_2);
    switch(op){
        case '+':

            sum(num_1, num_2);
            break;
        case '-':
            sub(num_1, num_2);
            break;
        case '/':
            div_(num_1, num_2);
            break;
        default:
            printf("try again");
            break;
    }*/
}



