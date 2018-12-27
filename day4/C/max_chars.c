/**
  * @author : ashwek
  * @date : 25/12/2018
  */

#include<stdio.h>

void main(){

    char Str[50];
    int i, Max = 0;
    int possibleChar[94] = {0};  //ASCII 32-126

    printf("Enter a string = ");
    scanf("%[a-zA-Z-0-9 ]s", Str);  //Modify control string to accept blank spaces in input

    for(i=0; Str[i]!='\0'; i++){
        possibleChar[ (int)Str[i] - 32]++;
        if( possibleChar[Max] < possibleChar[ (int)Str[i] - 32] )
            Max = (int)Str[i] - 32;
    }

    printf("Most frequent character = \'%c\'\n", (Max+32));
}
