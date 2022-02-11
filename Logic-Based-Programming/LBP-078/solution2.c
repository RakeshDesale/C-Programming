# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void removeDuplicate(char []);

int main() {
    char str[20];
    scanf("%s",str);
    removeDuplicate(str);
    return 0;
}

void removeDuplicate(char str[]){
    int i,j,k;
    for(i=0;str[i];i++){
        for(j=i+1;str[j];j++){
            if(str[i]==str[j]){
                for(k=j;str[k];k++)
                    str[k]=str[k+1];
            }
        }
    }
    printf("%s",str);
}
