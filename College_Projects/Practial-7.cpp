#include <stdio.h>
int main(){
    int num1, num2;
    int addition, subtraction, multiplication, division, modulas;
    
	printf("enter the first number: ");
    scanf("%d",&num1);
   
    printf("enter the second number: ");
    scanf("%d",&num2);
    
	addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;
    modulas = num1 % num2;
    
	printf("\nthe addition of %d and %d is : %d \n", num1, num2, addition);
    printf("the subtraction of %d and %d is : %d \n", num1, num2, subtraction);
    printf("the multiplication of %d and %d is : %d \n", num1, num2,
    multiplication);
    printf("the division of %d and %d is : %d \n", num1, num2, division);
    printf("the modulas of %d and %d is : %d", num1, num2, modulas);
    
}
