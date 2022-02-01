# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int stoneCount(char[], char[]);

int main() {
    char jw[30],st[30];
    scanf("%s %s",jw,st);
    printf("%d",stoneCount(jw,st));
    return 0;
}

int stoneCount(char jw[], char st[]){
    int i,j,count=0;
    for(i=0;jw[i];i++){
        for(j=0;st[j];j++){
            if(jw[i]==st[j])
                count++;
        }
    }
    return count;
}
