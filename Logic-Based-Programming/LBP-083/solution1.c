# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void firstNVowels(char [],int);

int main() {
    char str[50];
    int n;
    scanf("%[^\n]s",str);
    scanf("%d",&n);
    firstNVowels(str, n);
    return 0;
}

void firstNVowels(char str[], int n){
    int i,j=0;
    char vowels[50]="\0";
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
}
