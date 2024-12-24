#include<stdio.h>
main(){
	int i,j;
	
	printf("Enter a Number : ");
	scanf("%d",&i);
	
	printf("Enter New Number : ");
	scanf("%d",&j);
	
	i=i+j;
	j=i-j;
	i=i-j;
	
	printf("The Swap value of i is = %d\n",i);
	
	printf("The Swap value of j is = %d\n",j);
	
} 
