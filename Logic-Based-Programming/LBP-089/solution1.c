# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str1[20], str2[20], str3[50]="\0";
    int i,j=0,count=0;
    scanf("%s",str1);
    scanf("%s",str2);
    i=0;
    while(str1[i]){
        str3[j++]=str1[i++];
    }
    i=0;
    while(str1[i]){
        str3[j++]=str1[i++];
    }
    j=0;
    for(i=0;str3[i];i++){
        if(str3[i]==str2[j]){
            count++;
            j++;
        }
    }
    printf((count==strlen(str2))?"true":"false");
    return 0;
}
