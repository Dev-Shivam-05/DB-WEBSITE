#include<stdio.h>
#include<string.h>
int main(){
    char name[19];
    printf("Enter your name :");
    scanf("%s",&name);
    int length=strlen(name);
    printf("The length of your name is: %d.",length);
}
