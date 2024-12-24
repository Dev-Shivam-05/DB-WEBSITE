#include <stdio.h>
    main(){
    int a = 1, b = 0;
    int num1, num2;
    num1 = a;
    num2 = b;
    if(num1 == 1 && num2 == 0){
    printf("AND operator is successfully executed \n");
    }else{
    	printf("Error in And");
	}
    if(num1 == 0 || num1 == 1){
    printf("OR operator is successfully executed \n");
    }else{
    	printf("Error in Or");
	}
    if(num1 != 0){
    printf("NOR operator is successfully executed");
    }else {
    printf("error in NOR");
    }
}
