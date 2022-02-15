# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[50],vowels[50]="\0";
    int i,j=0,n;
    scanf("%[^\n]s",str);
    scanf("%d",&n);
    for(i=0;str[i];i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            vowels[j++]=str[i];
    }
    if(n>strlen(vowels))
        printf("invalid");
    else{
        for(i=0;i<n;i++)
            printf("%c",vowels[i]);
    }
    return 0;
}
