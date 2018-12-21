/**
  * @author : ashwek
  * @date : 21/12/2018
  */

#include<stdio.h>
#include<string.h>

void reverse(char Str[]){
    char temp;
    int i;

    for(i=0; i<(strlen(Str)/2); i++){
        temp = Str[i];
        Str[i] = Str[strlen(Str)-i-1];
        Str[strlen(Str)-i-1] = temp;
    }
}

void main(){

    char Str[50], Rev[50];
    printf("Enter a string = ");
    scanf("%s", Str);

    strcpy(Rev, Str);
    reverse(Rev);
    
    printf("Reverse = %s", Rev);
}
