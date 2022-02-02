# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int strMatched(char[], char[]);

int main() {
    char str1[30],str2[30];
    scanf("%s %s",str1,str2);
    printf(strMatched(str1,str2)?"true":"false");
    return 0;
}

int strMatched(char str1[], char str2[]){
    int count=0,i,j;
    j=strlen(str1)-1;
    for(i=strlen(str2)-1;str2[i];i--){
        if(str2[i]==str1[j--])
            count++;
    }
    return (count==strlen(str2))?1:0;
}
