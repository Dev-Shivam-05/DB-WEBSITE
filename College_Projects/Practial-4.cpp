#include <stdio.h>
#include <string.h>

int main(){
    char xname[100];
    char yname[100];
    char tempname[100];
    printf("Enter Your First Name: ");
    scanf("%s",&xname);

    printf("Ener Your Last Name: ");
    scanf("%s",&yname);
    
    strcpy(tempname,xname);
    strcat(tempname,yname);

    printf("Your full name is %s ",tempname);
}
