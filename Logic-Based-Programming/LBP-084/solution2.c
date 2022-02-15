# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str1[20],str2[20]="\0",ch;
    int i,j;
    scanf("%s",str1);
    strcpy(str2,str1);
    if(strlen(str1)==0)
        printf("invalid");
    for(i=0;str1[i];i++){
        for(j=i+1;str1[j];j++){
            if(str1[i]>str1[j]){
                ch=str1[i];
                str1[i]=str1[j];
                str1[j]=ch;
            }
        }
    }
    printf((strcmp(str1,str2)==0)?"true":"false");
    return 0;
}
