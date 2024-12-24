#include<stdio.h>
#include<stdio.h>
main(){
	int i,j;
	
	printf("Enter a Number : ");
	scanf("%d",&i);
	
	printf("Enter New Number : ");
	scanf("%d",&j);
	
	if(i>j){
		printf("the maximum number is i = %d",i);
	}else{
		printf("the maximum number is j = %d",j);
	}
}
