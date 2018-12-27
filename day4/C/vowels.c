/**
  * @author : ashwek
  * @date : 25/12/2018
  */

#include<stdio.h>
#include<ctype.h>

void main(){

    char Str[50];
    int i, count=0;

    printf("Enter a string = ");
    scanf("%s", Str);

    for(i=0; Str[i]!='\0'; i++){
        switch(tolower(Str[i])){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
        }
    }

    printf("number of vowels = %d", count);

}
