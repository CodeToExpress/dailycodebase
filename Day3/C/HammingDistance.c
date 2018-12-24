/**
  * @author : ashwek
  * @date : 24/12/2018
  */

#include<stdio.h>
#include<string.h>

int HammingDistance(char Str1[], char Str2[]){

    int i, count = 0;

    if( strlen(Str1) != strlen(Str2) )
        return -1;

    for(i=0; i<strlen(Str1); i++){
        if( Str1[i] != Str2[i])
            count++;
    }

    return count;
}

void main(){

    char Str1[50], Str2[50];
    int HD;

    printf("Enter string 1 = ");
    scanf("%s", Str1);
    printf("Enter string 2 = ");
    scanf("%s", Str2);

    HD = HammingDistance(Str1, Str2);

    if( HD == -1 )
        printf("Strings are of different length");
    else
        printf("Hamming Distance = %d", HD);
}
