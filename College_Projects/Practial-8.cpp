#include <stdio.h>
main (){
	int num1, num2;
	printf("enter the first number: ");
	scanf("%d",&num1);
	printf("enter the second number: ");
	scanf("%d",&num2);
	if(num1 == num2){
	printf("num1 is equal to num2\n");
	}else{
	printf("num1 is not equal to num2\n");
	}
	if(num1>num2){
	printf("num1 is greater than num2\n");
	}else{
	printf("num1 is less than num2\n");
	}
	if(num1 >= num2){
	printf("num1 is greater than or equal to num2\n");
	}else{
	printf("num1 is less or equal to num2");
}
}
