#include<stdio.h>
main(){
	int i,j,temp;
	
	printf("Enter A Number : ");
	scanf("%d",&i);
	
	printf("Enter A Number : ");
	scanf("%d",&j);
	
	temp=i;
	i=j;
	j=temp;
	
	printf("The swap value of i : %d\n",i);
	
	printf("The swap value of j : %d\n+",j);
	
}
