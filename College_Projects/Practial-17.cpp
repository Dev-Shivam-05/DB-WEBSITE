#include<stdio.h>
#include<math.h>
main(){
	float Add, Sub, Prod, Div;
	int enter,mod,x,y;
	printf("Enter first Value:");
	scanf("%f",&x);
	printf("Enter The Number:");
	scanf("%f",&y);
	printf("What do you want\n~Add 1\n~Sub 2 \n~Prod 3\n~Div 4\n");
	printf("Enter your choice : ");
	scanf("%d",&enter);
	
	Add=x+y;
	Sub=x-y; 
	Prod=x*y;
	Div=x/y;
	mod=x%y;
	
	switch(enter){
		case 1: printf(" Addition of Two Number is = %f\n", Add);
		break;
		
		case 2: printf(" Subtraction of Two Number is = %f\n", Sub);
		break;
		
		case 3: printf("Product of Two Number is = %f\n", Prod);
		break;
		
		case 4: printf(" Division of Two Number is = %f\n", Div);
		break;
		
		case 5: printf(" Mod of Two Number is = %d\n", mod);
		break;
		
		default : printf("khotu che bhaila");
		break;
	}
}

