#include <stdio.h>

int main(void){

    char c;

    printf("Enter a single character\n");
    scanf("%c", &c); //when multiple characters are entered only the first character is taken as input to check conditions

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("Its an alphebetic character\n");
    }
    else if (c >= '0' && c <= '9'){
        printf("Its a digit\n");
    }
    else {
        printf("Its a special character\n");
    }
}
