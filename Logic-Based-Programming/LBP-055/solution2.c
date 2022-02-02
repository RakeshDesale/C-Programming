# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str1[30],str2[30];
    int i,j,count=0;
    scanf("%s %s",str1,str2);
    j=strlen(str1)-1;
    for(i=strlen(str2)-1;str2[i];i--){
        if(str2[i]==str1[j--])
            count++;
    }
    printf((count==strlen(str2))?"true":"false");
    return 0;
}
