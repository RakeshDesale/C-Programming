# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[100];
    int i,j,u,count = 0;
    scanf("%s",s);
    for(i=0;s[i];i++){
        u = 1;
        for(j=0;s[j];j++){
            if(i!=j && s[i]==s[j]){
                u=0;
                break;
            }
        }
        if(u==1){
            count++;
            if(count == 2){
                printf("%c",s[i]);
                break;
            }
        }
    }
    return 0;
}
