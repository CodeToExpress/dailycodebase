/* *
   * @author : ashwek
   * @date : 29/12/2018
   */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int oneEditAway(char Str1[], char Str2[]){

    int l1 = strlen(Str1), l2 = strlen(Str2);
    int i=0, j=0, diff=0;

    if( abs(l1 - l2) > 1 )
        return 0;

    while( diff<2 && (i < l1) && (j < l2) ){

        if( Str1[i] == Str2[j] ){
            i++;
            j++;
        }
        else{
            diff++;
            if( l1 == l2 ){
                i++;
                j++;
            }
            else if( l1 < l2 )
                j++;
            else
                i++;
        }
    }

    return diff < 2;

}

void main(){

    char Str1[20];
    char Str2[20];

    printf("Enter string 1 = ");
    scanf("%s", Str1);
    printf("Enter string 2 = ");
    scanf("%s", Str2);

    printf("%s & %s are ", Str1, Str2);
    if( oneEditAway(Str1, Str2) == 0 )
        printf("NOT ");
    printf("one edit away\n");
}
