#include<stdio.h>
#include<string.h>
main(){
	char a[100],b[100];
	int cmp;
	printf("Enter The String:");
	scanf("%s",&a);
	strcpy(b,a);
	strrev(a);
	cmp=strcmp(a,b);
	printf("%d\n",cmp);
	if(cmp==0){
		printf("Yes,it is Palindrome");
	}
	else{
		printf("NO,It is not Palindrome");
	}
	
}
