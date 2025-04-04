//Write a program that takes an integer as input and returns true if the input is a power of two.  Examples: 8=> returns true   6=> returns false

#include<stdio.h>
int main()
{
    int number;

    printf("Enter any number \n");
    scanf("%d", number);

    if (number > 0 && (number & (number - 1)) == 0){
    printf("True. \n");
    }
    else{
    printf("False. \n");
    }

    return 0;
}
