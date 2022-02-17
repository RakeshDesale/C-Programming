# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int rotation(char [],char []);

int main() {
    char str1[20],str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    printf((rotation(str1,str2))?"true":"false");
    return 0;
}

int rotation(char str1[],char str2[]){
    char str3[50]="\0";
    int i=0,j=0,count=0;
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
    return(count==strlen(str2));
}
