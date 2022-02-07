# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20];
    int i,flag=0;
    scanf("%s",str);
    for(i=0;str[i];i++){
        if(str[i]==str[i+1]){
            flag=1;
            break;
        }
    }
    printf((flag==1)?"true":"false");
    return 0;
}
